#pragma once

#include "common_types.h"

r_err_t r_thread(void *data, void *(*start)(void *), r_thread_t *out);
