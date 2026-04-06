#include <stdio.h>

int findTotal(int scores[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s = s + scores[i];
    }
    return s;
}

int findMax(int scores[], int size) {
    int m = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > m) {
            m = scores[i];
        }
    }
    return m;
}

int countHigh(int scores[], int size, float avg) {
    int c = 0;
    for (int i = 0; i < size; i++) {
        if ((float)scores[i] > avg) {
            c++;
        }
    }
    return c;
}

int main() {
    int runs[10];
    for (int j = 0; j < 10; j++) {
        printf("Enter score %d: ", j + 1);
        scanf("%d", &runs[j]);
    }

    int total = findTotal(runs, 10);
    float average = (float)total / 10;
    int maxVal = findMax(runs, 10);
    int above = countHigh(runs, 10, average);

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", maxVal);
    printf("Above average matches: %d\n", above);

    return 0;
}