#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	if (size && ptr) {
		unsigned char *p = malloc(sizeof(unsigned char) * (size + 1));
		if (p == NULL) 
			return NULL;
		for (size_t i = 0; i < size; i++) {
			p[i] = ((unsigned char *)ptr)[i];
		}
		p[size] = '\0';
		free(ptr);
		return p;
	}
	return NULL;
}
