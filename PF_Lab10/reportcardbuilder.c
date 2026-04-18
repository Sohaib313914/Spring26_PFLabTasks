#include <stdio.h>

int main() {
    FILE *myfile;
    char sname[50];
    int s1, s2, s3;
    float mean;
    char text[100];

    printf("Name: ");
    scanf("%s", sname);
    printf("Scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    mean = (s1 + s2 + s3) / 3.0;

    myfile = fopen("report.txt", "w+");
    if (myfile == NULL) return 1;

    fprintf(myfile, "REPORT\n");
    fprintf(myfile, "Name: %s\n", sname);
    fprintf(myfile, "Average: %.2f\n", mean);
    fprintf(myfile, "Result: %s\n", (mean >= 40) ? "PASS" : "FAIL");

    rewind(myfile);

    printf("\nReading File:\n");
    while (fgets(text, 100, myfile) != NULL) {
        printf("%s", text);
    }

    fclose(myfile);
    return 0;
}