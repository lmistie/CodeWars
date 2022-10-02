#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* balancedNum(unsigned long long int number) {
    int i, j;
    char *str;
    int lsum, rsum;
    
    asprintf(&str, "%d", number);
    lsum = rsum = 0;
    for (i = 0, j = strlen(str) - 1; i < j - 1; i++, j--) {
        lsum += str[i] - '0';
        rsum += str[j] - '0';
    }
    
    return (lsum == rsum) ? "Balanced" : "Not Balanced";
}

int main() {
    // Test case №1
    printf("%s\n", balancedNum(7)); // Balanced
    printf("%s\n", balancedNum(959)); // Balanced
    printf("%s\n", balancedNum(13)); // Balanced
    printf("%s\n", balancedNum(432)); // Not balanced
    printf("%s\n", balancedNum(424)); // Balanced
    // // Test case №2
    printf("%s\n", balancedNum(1024)); // Not balanced
    printf("%s\n", balancedNum(66545)); // Not balanced
    printf("%s\n", balancedNum(295591)); // Not balanced
    printf("%s\n", balancedNum(1230987)); // Not balanced
    printf("%s\n", balancedNum(56239814)); // Balanced
    return 0;
}