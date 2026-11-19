
#include <stdio.h>

int main()
{
    int rows, columns, i, j;
    int A[10][10], B[10][10], SUM[10][10];

    printf("Enter number of rows (1-10): ");
    if (scanf("%d", &rows) == 0)
    {
        printf("Invalid input!");
        return 0;
    }

    printf("Enter number of columns (1-10): ");
    if (scanf("%d", &columns) == 0)
    {
        printf("Invalid input!");
        return 0;
    }

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10)
    {
        printf("Invalid matrix size!");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &A[i][j]) == 0)
            {
                printf("Invalid input!");
                return 0;
            }
        }
    }

    printf("Enter second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &B[i][j]) == 0)
            {
                printf("Invalid input!");
                return 0;
            }
        }
    }

    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            SUM[i][j] = A[i][j] + B[i][j];
            printf("%d\t", SUM[i][j]);
        }
        printf("\n");
    }

    return 0;
}
