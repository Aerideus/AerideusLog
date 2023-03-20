/*
	Author: @rasmushugosson
	Last modified: 2023-03-20

	Aerideus Log example file to demonstrate some of its features. For more information
	about usage and features, see README.md from https://github.com/Aerideus/AerideusLog.

	Please see lisence file before use at https://github.com/Aerideus/AerideusLog.

	Copyright (c) 2023 Aerideus
*/

#include "aerideus_log.h"

int main(void)
{
	// Sets the minimum severity for console and file logging
	AE_LOG_CONSOLE_LEVEL_SET(TRACE);
	AE_LOG_FILE_LEVEL_SET(WARNING);

	// Logs the current build type to the console
	AE_LOG_CONSOLE_DEBUG_INFO("Debug build!");
	AE_LOG_CONSOLE_RELEASE_INFO("Release build!");
	AE_LOG_CONSOLE_DIST_INFO("Distribution build!");

	// Logs variables to the console regardless of build type
	int a = 5;
	float pi = 3.14159f;
	AE_LOG_CONSOLE_TRACE("a = %d, pi = %.5f", a, pi);

	// Logs messages of different severity to the log file
	AE_LOG_FILE_INFO("Information!"); // Will not be logged since threshold is WARNING
	AE_LOG_FILE_WARNING("Warning!!");
	AE_LOG_FILE_ERROR("Error!!!");

	// Exports the log file
	// This can only be called once and should be done before termination
	// TODO: Possibly change later
	AE_LOG_FILE_EXPORT("log.txt");

	return 1;
}