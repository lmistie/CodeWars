#include "stdio.h"
#include "stdlib.h"

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z)
{
    int *arr3 = malloc(n1 * sizeof(int));
    int i = 0;
    for (int j = 0; j < n1; j++) {
        int k = 0;
        for (; k < n2; k++) {
            if (arr1[j] == arr2[k]) {
                break;
            }
        }
        if (k == n2) {
            arr3[i++] = arr1[j];
        }
    }
    *z = i;
    return arr3;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3};
    int arr2[] = {2};
    size_t z;
    int *arr3 = array_diff(arr1, 5, arr2, 1, &z);
    for (int i = 0; i < z; i++) {
        printf("%d ", arr3[i]);
    }
    printf("%zu\n", z);
}