#include <stdio.h>
#include <math.h>

typedef struct { double m, n; } roots;

roots quadratic_formula(int a, int b, int c) {
    roots result;
    result.m = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    result.n = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    return result;
}

int main() {
    roots result = quadratic_formula(1, 2, 1);
    printf("%f %f\n", result.m, result.n);
}