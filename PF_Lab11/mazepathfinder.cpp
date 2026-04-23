#include <stdio.h>

int countWays(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    /* recursive step based on 1 or 2 steps move */
    return countWays(n - 1) + countWays(n - 2);
}

void printPaths(int n, char path[], int top) {
    if (n == 0) {
        path[top] = '\0';
        printf("%s\n", path);
        return;
    }
    if (n >= 1) {
        path[top] = '1';
        printPaths(n - 1, path, top + 1);
    }
    if (n >= 2) {
        path[top] = '2';
        printPaths(n - 2, path, top + 1);
    }
}

int main() {
    int n;
    char pathData[20];
    printf("Enter N: ");
    scanf("%d", &n);
    
    if(n >= 1 && n <= 15) {
        printf("Total ways: %d\n", countWays(n));
        if(n == 4) {
            printf("Unique paths:\n");
            printPaths(4, pathData, 0);
        }
    }
    return 0;
}