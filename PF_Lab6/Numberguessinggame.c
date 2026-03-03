#include<stdio.h>

int main()
{
    int guess;
    int correct = 7;

    printf("Enter number you guess: ");
    scanf("%d", &guess);

    while (guess != correct)
    {
        if (guess > correct)
            printf("Too High\n");
        else
            printf("Too Low\n");

        printf("Enter number again you guess: ");
        scanf("%d", &guess);
    }

    printf("Correct!\n");

    return 0;
}
