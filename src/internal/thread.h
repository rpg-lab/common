#ifndef INTERNAL_THREAD_H
#define INTERNAL_THREAD_H

#include "rpg/common/functions/thread.h"

#include <pthread.h>

struct r_thread {
  pthread_t thread;
};

#endif
