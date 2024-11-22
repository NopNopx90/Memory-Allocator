#ifndef MALLOC_IMP_H
#define MALLOC_IMP_H

#include <stddef.h>

void *malloc_imp(size_t size);
void free_imp(void *ptr);

#endif
