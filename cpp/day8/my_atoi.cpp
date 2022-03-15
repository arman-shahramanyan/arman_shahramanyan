#include "my_atoi.h"

int my_atoi(char *str) {
    int x = 0;
    for (int i = 0;str[i] != '\0'; i++) {
        if (str[i] == '-'){
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            x = x * 10 + str[i] - '0';
        } else {
            break;
        }
    }
         if (str[0] == '-') {
            x -= x * 2;
            }

   return x;
}
