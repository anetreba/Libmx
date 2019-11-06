#include "libmx.h"

 void mx_strdel(char **str) {
 	if (*str) {
 		// printf("%s\n", *str);
 		free(*str);
 		*str = NULL;
 	}
 }
