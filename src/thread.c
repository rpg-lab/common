#include "rpg/common/functions/thread.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

#include <pthread.h>

#include "internal/thread.h"

r_err_t r_thread(void *data, void *(*start)(void *), r_thread_t *out) {
  r_thread_t result = malloc(sizeof(struct r_thread));
  if (!result) {
    return true;
  }
  if (pthread_create(&result->thread, NULL, start, data)) {
    return true;
  }
  return false;
}
