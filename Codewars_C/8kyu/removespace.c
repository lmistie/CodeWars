#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *no_space(const char * str_in)
{
    char *str_out = malloc(strlen(str_in) + 1);
    int i = 0;
    while (*str_in) {
        if (*str_in != ' ') {
            str_out[i++] = *str_in;
        }
        str_in++;
    }
    str_out[i] = '\0';
    return str_out;
}

int main()
{
    char *str = "Hello World!";
    printf("%s\n", no_space(str));
}