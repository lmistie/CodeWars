#include <iostream>
#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
    int sum = 0, left_sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    for (int i = 0; i < numbers.size(); i++) {
        sum -= numbers[i];
        if (left_sum == sum) {
            return i;
        }
        left_sum += numbers[i];
    }
    return -1;
}

int main() {
    vector <int> numbers = {1, 2, 3, 4, 3, 2, 1};
    cout << find_even_index(numbers) << endl;
    return 0;
}