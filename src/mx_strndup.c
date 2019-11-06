#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	char *dst;

	dst = mx_strnew(n);
	dst = mx_memcpy(dst, s1, n);
	return dst;
}
