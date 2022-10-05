#include <stdio.h>

int expression_matter(int a, int b, int c) {
    int max = a * b * c;
    if (a + b + c > max)
        max = a + b + c;
    if (a * b + c > max)
        max = a * b + c;
    if (a + b * c > max)
        max = a + b * c;
    if ((a + b) * c > max)
        max = (a + b) * c;
    if (a * (b + c) > max)
        max = a * (b + c);
    return max;
}

int main() {
    // Test case №1
    printf("%d\n", expression_matter(2, 1, 2)); // 6
    printf("%d\n", expression_matter(2, 1, 1)); // 4
    printf("%d\n", expression_matter(1, 1, 1)); // 3
    printf("%d\n", expression_matter(1, 2, 3)); // 9
    printf("%d\n", expression_matter(1, 3, 1)); // 5
    printf("%d\n", expression_matter(2, 2, 2)); // 8
    printf("\n");
    // Test case №2
    printf("%d\n", expression_matter(5, 1, 3)); // 20
    printf("%d\n",expression_matter(3, 5, 7)); // 105
    printf("%d\n",expression_matter(5, 6, 1)); // 35
    printf("%d\n",expression_matter(1, 6, 1)); // 8
    printf("%d\n",expression_matter(2, 6, 1)); // 14
    printf("%d\n",expression_matter(6, 7, 1)); // 48
    printf("\n");
    // Test case №3
    printf("%d\n",expression_matter(2, 10, 3)); // 60
    printf("%d\n",expression_matter(1, 8, 3)); // 27
    printf("%d\n",expression_matter(9, 7, 2)); // 126
    printf("%d\n",expression_matter(1, 1, 10)); // 20
    printf("%d\n",expression_matter(9, 1, 1)); // 18
    printf("%d\n",expression_matter(10, 5, 6)); // 300
    printf("%d\n",expression_matter(1, 10, 1)); // 12
}