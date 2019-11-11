#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
	unsigned char *dst_tmp = (unsigned char *)dst;
	unsigned char *src_tmp = (unsigned char *)src;
	size_t i = 0;

	if (n == 0)
		return NULL;
	while (i < n) {
		dst_tmp[i] = src_tmp[i];
		i++;
		if (src_tmp[i] == (unsigned char)c) {
			dst_tmp[i] = src_tmp[i];
			i++;
			break;
		}
	}
	return &(dst_tmp[i]);
}
