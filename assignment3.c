#include <stdio.h>

int main()
{
    float a, b;
    int choice;

    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");

    printf("\n\nEnter (1,2,3,4) for your desired operation: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid choice, choose from (1 to 4)");
        return 0;
    }

    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice, choose from (1 to 4)");
        return 0;
    }

    printf("\nEnter your first number: ");

    if (scanf("%f", &a) != 1)
    {
        printf("First number was invalid, try again");
        return 0;
    }

    printf("\nEnter second number: ");

    if (scanf("%f", &b) != 1)
    {
        printf("Second number was invalid, try again");
        return 0;
    }

    switch (choice)
    {
        case 1:
            printf("\nResult = %.2f\n", a + b);
            break;

        case 2:
            printf("\nResult = %.2f\n", a - b);
            break;

        case 3:
            printf("\nResult = %.2f\n", a * b);
            break;

        case 4:
            if (b == 0)
            {
                printf("Cannot divide by 0");
            }
            else
            {
                printf("\nResult = %.2f\n", a / b);
            }
            break;

        default:
            printf("\nInvalid input, try again\n");
            break;
    }

    return 0;
}