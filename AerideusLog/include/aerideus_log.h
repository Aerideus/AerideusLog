
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
/// Sets the minimum severity required for a console messages to be printed.
/// </summary>
/// <param name="min">is the minimum log_level that will be printed</param>
void ae_log_console_level_set(log_level min);

/// <summary>
/// Sets the minimum severity required for a file messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
void ae_log_file_level_set(log_level min);
