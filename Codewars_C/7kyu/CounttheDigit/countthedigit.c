#include "stdio.h"

int nbDig(int n, int d) {
    int count = 0;
    for (int i = 0; i <= n; i++) {
        int num = i * i;
        if(num == 0 && d == 0) {
            count++;
        }
        while (num > 0) {
            if (num % 10 == d) {
                count++;
            }
            num /= 10;
        }
    }
    return count;
}

int main() {
    printf("%s", "Test = ");
    printf("%d", nbDig(10, 1));
    printf("%s\n", " answer -> 4");
    printf("%s", "Test = ");
    printf("%d", nbDig(5750, 0));
    printf("%s\n", " answer -> 4700");
    printf("%s", "Test = ");
    printf("%d", nbDig(11011, 2));
    printf("%s\n", " answer -> 9481");
    printf("%s", "Test = ");
    printf("%d", nbDig(12224, 8));
    printf("%s\n", " answer -> 7733");
    printf("%s", "Test = ");
    printf("%d", nbDig(11549, 1));
    printf("%s\n", " answer -> 11905");
    printf("%s", "Test = ");
    printf("%d", nbDig(14550, 7));
    printf("%s\n", " answer -> 8014");
    printf("%s", "Test = ");
    printf("%d", nbDig(8304, 7));
    printf("%s\n", " answer -> 3927");
    printf("%s", "Test = ");
    printf("%d", nbDig(10576, 9));
    printf("%s\n", " answer -> 7860");
    printf("%s", "Test = ");
    printf("%d", nbDig(12526, 1));
    printf("%s\n", " answer -> 13558");
    printf("%s", "Test = ");
    printf("%d", nbDig(7856, 4));
    printf("%s\n", " answer -> 7132");
    printf("%s", "Test = ");
    printf("%d", nbDig(14956, 1));
    printf("%s\n", " answer -> 17267");
    return 0;
}