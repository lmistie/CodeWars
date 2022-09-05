#include <stdio.h>

int summation(int num) {
// The first solution
  int sum = 0;
  for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    return sum;

// The second solution
    // int sum = 0;
    // sum = (num * (num + 1) / 2);
    // return (sum);
}

int main(){
    printf("Summation = %d\n", summation(1));
    printf("Summation = %d\n", summation(8));
    printf("Summation = %d\n", summation(100));
}