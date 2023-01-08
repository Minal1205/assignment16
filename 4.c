#include <stdio.h>
// to find the sum of right diagonals of a matrix.
int main()
{
    int a[3][3], sum = 0;
    printf("Enter Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    printf("Matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of right diagonal element is %d\n", sum);
    return 0;
}