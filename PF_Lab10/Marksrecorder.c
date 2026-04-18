#include <stdio.h>

int main() {
    FILE *ptr;
    char name[30];
    int mark;

    ptr=fopen("grades.txt", "w");
    if (ptr == NULL) return 1;

    for (int j = 0; j < 3; j++) {
       	  printf("Name: ");
    scanf("%s", name);
        printf("Grade: ");
        scanf("%d", &mark);
       		 fprintf(ptr, "%s %d\n", name, mark);
    }
    fclose(ptr);

    ptr = fopen(" grades.txt", "r");
    printf("\nDat a in file:\n");
    while (fscanf(ptr, "%s %d", name, &mark) != EOF) {
        printf("Student: %s -   %d\n", name, mark);
    }  fclose(ptr);

    return 0;
}