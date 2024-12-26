#ifndef RPG_COMMON_FUNCTIONS_THREAD_H
#define RPG_COMMON_FUNCTIONS_THREAD_H

#include "../types/base.h"
#include "../types/thread.h"

r_err_t r_thread(void *data, void *(*start)(void *), r_thread_t *out);

#endif
