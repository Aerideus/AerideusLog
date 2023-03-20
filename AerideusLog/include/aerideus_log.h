/*
	Author @rasmushugosson
*/

// Severity level -----------------------------------------------------------------------------------------------

/// <summary>
/// Used to specifies severity level of Aerides log messages.
/// </summary>
typedef enum {
	TRACE = 0, INFO, WARNING, ERROR, FATAL
} log_level;

/// <summary>
/// Sets the minimum severity required for a console messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
void ae_log_console_level_set(log_level min);

/// <summary>
/// Sets the minimum severity required for a console messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
#define AE_LOG_CONSOLE_LEVEL_SET(min) ae_log_console_level_set(min)

/// <summary>
/// Sets the minimum severity required for a file messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
void ae_log_file_level_set(log_level min);

/// <summary>
/// Sets the minimum severity required for a file messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
#define AE_LOG_FILE_LEVEL_SET(min) ae_log_file_level_set(min)

// Console ------------------------------------------------------------------------------------------------------

/// <summary>
/// Internal function that should only be called through macros. (AE_LOG_CONSOLE_...)
/// </summary>
/// <param name="l">should not be specified</param>
/// <param name="fn">should not be specified</param>
/// <param name="ln">should not be specified</param>
/// <param name="f">should not be specified</param>
void i_ae_log_console(log_level l, const char* fn, int ln, const char* f, ...);
