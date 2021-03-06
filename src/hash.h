#ifndef _HASH_H_
#define _HASH_H_

#include "types.h"

unsigned int hash_mem(const void *data, unsigned int len);
unsigned int hash_string(const char *value);
unsigned int hash_u32(u32 value);
unsigned int hash_u64(u64 value);
unsigned int hash_pointer(void *value);

#endif
