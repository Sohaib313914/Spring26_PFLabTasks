#include <stdio.h>
#include <string.h>

struct Department {
    char dCode[10];
    char dName[50];
};

struct Course {
    char cCode[10];
    char cName[60];
    int hours;
    struct Department dept;
};

void showByDept(struct Course c[], int n, char code[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(c[i].dept.dCode, code) == 0) {
            printf("Course: %s (%s)\n", c[i].cName, c[i].cCode);
        }
    }
}

int main() {
    struct Course list[3];
    for(int i = 0; i < 3; i++) {
        printf("Course Code & Name: ");
        scanf("%s %s", list[i].cCode, list[i].cName);
        printf("Dept Code & Name: ");
        scanf("%s %s", list[i].dept.dCode, list[i].dept.dName);
    }
    
    char filterCode[10];
    printf("\nEnter Dept Code to filter: ");
    scanf("%s", filterCode);
    showByDept(list, 3, filterCode);
    
    return 0;
}