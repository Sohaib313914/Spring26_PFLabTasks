#include <stdio.h>

int main() {
    FILE *fp;
    int user;
    float gap;
    char word[20];

    fp = fopen("config.txt", "r");

    if (fp == NULL) {
        printf("Making new file\n");
        fp = fopen("config.txt" , "w");
        fprintf(fp, "Users_ 50\nGap: 2.5\nStatus: On\n");
        fclose(fp);
    } else {
        printf(" File exists.\n");
        while (fscanf(fp,  "%s %d %f %s", word, &user, &gap, word) != EOF) {
            printf("Settings Loaded.\n");
        }
        fclose(fp);
    }
    return 0;
}