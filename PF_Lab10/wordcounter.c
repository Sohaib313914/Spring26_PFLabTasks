#include <stdio.h>
#include <string.h>

int main() {
    char book[6][20];
    int mark[6] =  {0};

    for (int a = 0; a < 6; a++) {
        printf("Word %d: ", a + 1);
        scanf("%s",  book[a]);
    }

    for (int a = 0; a < 6; a++) {
        if (mark[a] == 0) {
            int total = 0;
            for (int b = 0; b < 6; b++) {
                if (strcmp(book[a], book[b]) == 0) {
                      total++;
                    mark[b] = 1;
                }
            }
            printf("\n%s seen %d times\n", book[a], total);
            printf("Letters: ");
            for (int c = 0; book[a][c] != '\0'; c++) {
                  printf("%c ", book[a][c]);
            }
            printf ("\n");
        }
    }
return 0;
}