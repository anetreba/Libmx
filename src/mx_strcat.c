#include "libmx.h"

 char *mx_strcat(char *restrict s1, const char *restrict s2) {
 	int j = 0;
 	int size = mx_strlen(s1);

 	for (int i = mx_strlen(s1); i < size + mx_strlen(s2); i++) {
 		s1[i] = s2[j];
 		j++;
 	}
 	return s1;
 }
