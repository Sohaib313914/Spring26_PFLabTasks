#include <stdio.h>

int main() {
    int record[4][5] = {
        {1, 1, 0, 1, 1},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 1}
    };
    int (*p)[5] = record;
    int i, j, s;

    for (i = 0; i < 4; i++) {
        s = 0;
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            int val = (*(p + i))[j];
            printf("%d ", val);
            s = s + val;
        }
        printf("Total: %d", s);
        if (s < 3) {
            printf(" At risk");
        }
        printf("\n");
    }

    return 0;
}