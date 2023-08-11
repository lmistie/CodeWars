#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(*arr))
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("%lu\n", ARRAY_LENGTH(arr));
    return 0;
}