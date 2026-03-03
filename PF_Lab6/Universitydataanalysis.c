#include <stdio.h>

int main()
{
    int score;
    int distinction = 0, pass = 0, fail = 0;

    printf("Enter student scores (enter -1 to stop): ");
    scanf("%d", &score);

    while(score != -1)
    {
        if(score >= 75 && score <= 100)
            distinction++;
        else if(score >= 50 && score < 75)
            pass++;
        else if(score >= 0 && score < 50)
            fail++;

        scanf("%d", &score);
    }

    printf("Distinction: %d\n", distinction);
    printf("Pass: %d\n", pass);
    printf("Fail: %d\n", fail);

    return 0;
}
