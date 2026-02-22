#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float weight, height, age, result;
    char gender;

    printf("Advanced Health Calculator\n");
    printf("1 - BMI Calculation\n");
    printf("2 - BMR Calculation\n");
    printf("3 - Ideal Weight (Devine Formula)\n");
    printf("4 - Heart Rate Zone\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (meters): ");
            scanf("%f", &height);

            if (weight > 0 && height > 0)
            {
                result = weight / pow(height, 2);
                printf("BMI = %.2f\n", result);
            }
            else
            {
                printf("Error: Weight and height must be positive!\n");
            }
            break;

        case 2:
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age: ");
            scanf("%f", &age);
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender);

            if (weight > 0 && height > 0 && age > 0)
            {
                if (gender == 'M' || gender == 'm')
                {
                    result = 10*weight + 6.25*height - 5*age + 5;
                }
                else if (gender == 'F' || gender == 'f')
                {
                    result = 10*weight + 6.25*height - 5*age - 161;
                }
                else
                {
                    printf("Invalid gender input!\n");
                    break;
                }

                printf("BMR = %.2f calories/day\n", result);
            }
            else
            {
                printf("Error: All inputs must be positive!\n");
            }
            break;

        case 3:
            printf("Enter height (in inches): ");
            scanf("%f", &height);
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender);

            if (height > 0)
            {
                if (gender == 'M' || gender == 'm')
                {
                    result = 50 + 2.3 * fabs(height - 60);
                }
                else if (gender == 'F' || gender == 'f')
                {
                    result = 45.5 + 2.3 * fabs(height - 60);
                }
                else
                {
                    printf("Invalid gender input!\n");
                    break;
                }

                printf("Ideal Weight = %.2f kg\n", result);
            }
            else
            {
                printf("Error: Height must be positive!\n");
            }
            break;

        case 4:
            printf("Enter age: ");
            scanf("%f", &age);

            if (age > 0)
            {
                float maxHR = 220 - age;
                float lowerZone = 0.5 * maxHR;
                float upperZone = 0.85 * maxHR;

                printf("Target Heart Rate Zone: %.2f - %.2f bpm\n", lowerZone, upperZone);
            }
            else
            {
                printf("Error: Age must be positive!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

