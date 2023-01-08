#include <stdio.h>
// to find the sum of rows and columns of a Matrix.
int main()
{
    int a[3][3], sum1 = 0, sum2 = 0;
    printf("Enter Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        sum1 = 0;
        for (int j = 0; j < 3; j++)
        {
            sum1 = sum1 + a[i][j];
        }
        printf("Sum of %d row is %d\n\n", i + 1, sum1);
    }
    for (int j = 0; j < 3; j++)
    {
        sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum2 = sum2 + a[i][j];
        }
        printf("Sum of %d column is %d\n\n", j + 1, sum2);
    }

    return 0;
}