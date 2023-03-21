/*
	Author: @rasmushugosson
	Last modified: 2023-03-20
*/

#include "../include/aerideus_log.h"

#include <stdio.h>

#ifdef AE_WINDOWS

#include <Windows.h>

#endif // AE_WINDOWS

static log_level s_level = TRACE;

void ae_log_console_level_set(log_level min)
{
	s_level = min;
}

static WORD s_colors[5] = { 8, 10, 14, 12, 12 };
static const char* s_labels[5] = { "TRACE", "INFO", "WARNING", "ERROR", "FATAL" };

void i_ae_log_console(log_level l, const char* fn, int ln, const char* f, ...)
{
	if (l < s_level)
	{
		return;
	}

#ifdef AE_WINDOWS
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), s_colors[l]);
#endif // AE_WINDOWS

	printf("[%s] %s | Line: %d | Message: '", s_labels[l], fn, ln);

	va_list args;

	va_start(args, f);
	vprintf(f, args);
	va_end(args);

	printf("'\n");
}
