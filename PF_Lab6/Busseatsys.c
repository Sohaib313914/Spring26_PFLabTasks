#include <stdio.h>

int main()
{
    int seats = 40;
    int input = 1;

    while(seats > 0 && input != 0)
    {
        printf("Press 1 to book a seat (0 to stop): ");
        scanf("%d", &input);

        if(input == 1)
        {
            seats--;
            printf("Seat booked. Remaining seats: %d\n", seats);
        }
    }

    if(seats == 0)
        printf("All seats are booked.\n");
    else
        printf("Reservation stopped by operator.\n");

    return 0;
}
