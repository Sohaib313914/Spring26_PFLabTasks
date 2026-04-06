#include <stdio.h>

float getSum(float b[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) s += b[i];
    return s;
}

int getBest(float b[], int n) {
    int bi = 0;
    for (int i = 1; i < n; i++) {
        if (b[i] > b[bi]) bi = i;
    }
    return bi;
}

int isGood(float t) {
    if (t > 10000.0) return 1;
    return 0;
}

int main() {
    float tableBills[5];
    for (int i = 0; i < 5; i++) {
        printf("Table %d bill: ", i + 1);
        scanf("%f", &tableBills[i]);
    }

    float total = getSum(tableBills, 5);
    int top = getBest(tableBills, 5);

    printf("Total Revenue: %.2f\n", total);
    printf("Best Table: %d\n", top + 1);
    
    if (isGood(total)) printf("Verdict: Profitable\n");
    else printf("Verdict: Not profitable\n");

    return 0;
}