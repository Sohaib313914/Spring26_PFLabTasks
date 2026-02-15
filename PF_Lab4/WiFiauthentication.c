#include <stdio.h>
#include <string.h>

int main() {
    char username[10];
    int password;

    char correctUsername[] = "Sohaib";
    int correctPassword = 7890;

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (strcmp(username, correctUsername) == 0 && password == correctPassword) {
        printf("Connected Successfully\n");
    } 
	else {
        printf("Connection Failed\n");
    }

    return 0;
}

