#include <stdio.h>
#include <stddef.h>

int find_odd (size_t length, const int array[length]) {
    int odd = 0;
    for (int i = 0; i < length; i++) {
        odd ^= array[i];
    }
    return odd;
}

int main() {
    int array[7] = { 1, 1, 2, 2, 3, 3, 3};
    printf("%d\n", find_odd(7, array));
}