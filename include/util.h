#ifndef NEMO_UTIL_H
#define NEMO_UTIL_H

#include <inttypes.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <fcntl.h>
#include <assert.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>

namespace nemo {

int StrToUint64(const char *s, size_t slen, uint64_t *value);
int StrToInt64(const char *s, size_t slen, int64_t *value); 
int StrToInt32(const char *s, size_t slen, int32_t *val); 
int StrToUint32(const char *s, size_t slen, uint32_t *val); 
int StrToDouble(const char *s, size_t slen, double *dval);

static int do_mkdir(const char *path, mode_t mode);
int mkpath(const char *path, mode_t mode);

}
#endif