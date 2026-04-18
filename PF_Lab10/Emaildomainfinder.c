#include <stdio.h>
#include <string.h>

int main() {
    char mail[100];
    char temp[100];
    char head[120] = "Email: ";

    printf("Enter email: ");
    scanf("%s", mail);

    strcpy(temp, mail);
    char *loc = strchr(temp, '@');

    if (loc == NULL) {
        printf("No @ found");
        return 0;
    }

    if (strstr(loc, ".") == NULL) {
        printf("No dot in this domain");
        return 0;
    }

    char *site = loc + 1;
    printf("Domain: %s\n", site);

    strcat(head, mail);
    printf("%s \n", head);

    return 0;
}