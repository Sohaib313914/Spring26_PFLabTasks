#include <stdio.h>

void checkPass(char *s, int *u, int *d) {
    if (*s == '\0') return;

    if (*s >= 'A' && *s <= 'Z') (*u)++;
    else if (*s >= '0' && *s <= '9') (*d)++;
    
    /* moving pointer to next character */
    checkPass(s + 1, u, d);
}

int main() {
    char pass[50];
    int upper = 0, digits = 0;
    
    printf("Enter password: ");
    scanf("%s", pass);
    
    checkPass(pass, &upper, &digits);
    
    printf("Uppercase count: %d\n", upper);
    printf("Digits count: %d\n", digits);
    
    return 0;
}