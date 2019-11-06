#include "libmx.h"

 char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
 	int len = mx_strlen(str) + mx_count_substr(str, sub) * (mx_strlen(replace) - mx_strlen(sub));
 	printf("%d\n", len);
 	char *new = mx_strnew(len);

 	 if (str && sub && replace && mx_strlen(str) >= mx_strlen(sub)) {
   		for (int i = 0; i < len; ) {
   			if (mx_memcmp(str, sub, mx_strlen(sub)) == 0)  {
        		str += mx_strlen(sub);
       			for (int k = 0; k < mx_strlen(replace); k++)
       				new[i++] = replace[k];
       			continue ;
       		}
       		new[i] = *str;
   			str++;
   			i++;
   		}

   		return new;
    }
  	return NULL;
}
