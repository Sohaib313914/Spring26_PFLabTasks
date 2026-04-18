#include <stdio.h>

int main() {
    FILE *f;
    int val;
    int total = 0;
    float res;

    f = fopen("survey.txt", "w");
    for (int x = 0; x < 5; x++) {
        printf("Score: ");
        scanf("%d", &val);
        fprintf(f, "%d\n", val);
    }
    fclose(f);

    f = fopen("survey.txt", "r");
    while (fscanf(f, "%d", &val) != EOF) {
        total = total + val;
    }
    fclose(f);

    res = total / 5.0;
    printf("Sum: %d\nAvg: %.2f\n", total, res);

    return 0;
}