#include "../include/aerideus_log.h"

static log_level s_level = TRACE;

void ae_log_file_level_set(log_level min)
{
	s_level = min;
}
