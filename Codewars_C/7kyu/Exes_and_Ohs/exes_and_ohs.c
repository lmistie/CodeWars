#include <stdio.h>
#include <stdbool.h>

bool xo (const char* str) {
    int x = 0, o = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'x' || str[i] == 'X') x++;
        if (str[i] == 'o' || str[i] == 'O') o++;
    }
    return x == o;
}

int main() {
    printf("%d\n", xo("xo"));
    printf("%d\n", xo("xxOo"));
    printf("%d\n", xo("xxxm"));
    printf("%d\n", xo("Oo"));
    printf("%d\n", xo("ooom"));
    return 0;
}