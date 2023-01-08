#include <stdio.h>
//to accept a matrix and determine whether it is a sparse matrix.
int main()
{
    int a[3][3], count = 0;
    printf("Enter Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Given Matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > 4)
    {
        printf("Sparse\n");
    }
    else
        printf("not sparse\n");

    return 0;
}