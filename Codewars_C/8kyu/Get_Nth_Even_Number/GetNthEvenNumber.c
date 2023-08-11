// Return the Nth Even Number
#include <stdio.h>

int nth_even(int n)
{
    return n * 2 - 2;
}

int main()
{
    printf("%d\n", nth_even(1));
    printf("%d\n", nth_even(2));
    printf("%d\n", nth_even(3));
    printf("%d\n", nth_even(100));
    printf("%d\n", nth_even(1298734));
    return 0;
}