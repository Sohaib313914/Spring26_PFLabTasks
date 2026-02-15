#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus (Remainder of two numbers)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 == 0)
                printf("Error: Division by zero not allowed\n");
            else
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1;
            printf("Result: %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1 * num1;
            printf("Result: %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if(num1 < 0)
                printf("Error: Square root of negative number not allowed\n");
            else
            {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Result: %.2lf\n", result);
            break;

        case 10:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 == 0)
                printf("Error: Modulus by zero not allowed\n");
            else
            {
                result = fmod(num1, num2);
                printf("Result: %.2lf\n", result);
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

