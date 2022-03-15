#ifndef My_atoi
#define My_atoi
 
int my_atoi(char *str) {
    int x = 0;
    for (int i = 0;str[i] != '\0'; i++) {
   	if (str[i] >= 48 && str[i] <= 57) {
   	    x = x * 10 + str[i] - '0';
	} else {
	break;
	}
    }
   return x; 
}
 
#endif
