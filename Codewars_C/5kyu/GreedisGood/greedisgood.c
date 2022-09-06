#include <stdio.h>

int score(const int dice[5]) {
    int score = 0;
    int count[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++) {
        count[dice[i] - 1]++;
    }
    for (int i = 0; i < 6; i++) {
        if (count[i] >= 3) {
            if (i == 0) {
                score += 1000;
            } else {
                score += (i + 1) * 100;
            }
            count[i] -= 3;
        }
    }
    score += count[0] * 100;
    score += count[4] * 50;
    return score;
}

int main() {
    int dice[5] = {2, 3, 4, 6, 2};
    printf("%d\n", score(dice));
    return 0;
}