#include <stdio.h>

unsigned __int128 factorial(unsigned n){
    unsigned __int128 result = 1;
    for (unsigned i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    printf("%s", "Test = ");
    printf("%llu\n", factorial(0)); // 1
    printf("%s", "Test = ");
    printf("%llu\n", factorial(1)); // 1
    printf("%s", "Test = ");
    printf("%llu\n", factorial(2)); // 2
    printf("%s", "Test = ");
    printf("%llu\n", factorial(5)); // 120
    printf("%s", "Test = ");
    printf("%llu\n", factorial(10)); // 3628800
    printf("%s", "Test = ");
    printf("%llu\n", factorial(15)); // 1307674368000
    printf("%s", "Test = ");
    printf("%llu\n", factorial(20)); // 2432902008176640000
}