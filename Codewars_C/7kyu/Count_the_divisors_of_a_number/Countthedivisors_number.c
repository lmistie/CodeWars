#include <stdio.h>

int divisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    printf("%d\n", divisors(4));
    printf("%d\n", divisors(5));
    printf("%d\n", divisors(12));
    printf("%d\n", divisors(30));
    return 0;
}