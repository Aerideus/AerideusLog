/*
	Author: @rasmushugosson
	Last modified: 2023-03-22
*/

#include "../include/aerideus_log.h"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <memory.h>

#ifdef AE_WINDOWS
#include <Windows.h>
#endif // AE_WINDOWS

static log_level s_level = TRACE;

void ae_log_file_level_set(log_level min)
{
	s_level = min;
}

#define AE_LOG_FILE_BUFFER_SIZE 1024

static char* s_file_data = NULL;
static uint64_t s_file_size = 0;
static char s_message_buffer[AE_LOG_FILE_BUFFER_SIZE];

static const char* s_labels[5] = { "TRACE", "INFO", "WARNING", "ERROR", "FATAL" };

void i_ae_log_file(log_level l, const char* fn, int ln, const char* f, ...)
{
	if (l < s_level)
	{
		return;
	}

	sprintf_s(s_message_buffer, AE_LOG_FILE_BUFFER_SIZE, "[%s] %s | Line: %d | Message: '", s_labels[l], fn, ln);

	uint64_t len = 0;

	for (int i = 0; i < AE_LOG_FILE_BUFFER_SIZE; i++)
	{
		if (s_message_buffer[i] == '\0')
		{
			len = i;
			break;
		}
	}

	if (s_file_size == 0)
	{
		s_file_size = len;
		s_file_data = malloc(s_file_size + 1);

		memcpy(s_file_data, s_message_buffer, len);
	}

	else
	{
		char* data = realloc(s_file_data, s_file_size + len + 1);

		if (data)
		{
			s_file_data = data;

			memcpy(s_file_data + s_file_size, s_message_buffer, len);
			s_file_size += len;
			s_file_data[s_file_size] = '\0';
		}
	}

	va_list args;

	va_start(args, f);
	vsnprintf_s(s_message_buffer, AE_LOG_FILE_BUFFER_SIZE, AE_LOG_FILE_BUFFER_SIZE, f, args);
	va_end(args);

	len = 0;

	for (int i = 0; i < AE_LOG_FILE_BUFFER_SIZE; i++)
	{
		if (s_message_buffer[i] == '\0')
		{
			len = (uint64_t)i + 2;
			break;
		}
	}

	char* data = realloc(s_file_data, s_file_size + len + 1);

	if (data)
	{
		s_file_data = data;

		memcpy(s_file_data + s_file_size, s_message_buffer, len - 2);
		s_file_size += len;
		s_file_data[s_file_size - 2] = '\'';
		s_file_data[s_file_size - 1] = '\n';
		s_file_data[s_file_size] = '\0';
	}
}

void i_ae_log_file_next_line()
{
	if (s_file_size == 0)
	{
		return;
	}

	s_file_size++;

	char* data = realloc(s_file_data, s_file_size + 1);

	if (data)
	{
		s_file_data = data;
		s_file_data[s_file_size - 1] = '\n';
		s_file_data[s_file_size] = '\0';
	}
}

#undef ERROR

void ae_log_file_export(const char* p)
{
	if (s_file_size == 0)
	{
		return;
	}

	else if (!p)
	{
		AE_LOG_CONSOLE_NEXT_LINE();
		AE_LOG_CONSOLE_ERROR("Failed to export log file because the specified path is NULL. Make sure that the specified path is in a directory that exists.");

		free(s_file_data);
		s_file_size = 0;
		return;
	}

	FILE* f;
	fopen_s(&f, p, "w");

	if (f)
	{
		fprintf_s(f, "%s", s_file_data);

		fclose(f);

		AE_LOG_CONSOLE_NEXT_LINE();
		AE_LOG_CONSOLE_INFO("Log file exported to as %s.", p);
	}

	else
	{
		AE_LOG_CONSOLE_NEXT_LINE();
		AE_LOG_CONSOLE_ERROR("Failed to export log file because the specified path is incorrect. Make sure that the specified path is in a directory that exists.");
	}

	free(s_file_data);
	s_file_size = 0;
}
