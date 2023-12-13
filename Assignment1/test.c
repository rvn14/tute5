#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("Enter the no. of rows in table A: ");
    scanf("%d", &m);

    printf("Enter the no.of columns in table A: ");
    scanf("%d", &n);

    int A[m][n];
    int X[n];
    int Y[m];

    
    printf("Enter the elements of table A (%d rows x %d columns):\n", m, n);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of list X (%d elements):\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("X[%d]: ", i + 1);
        scanf("%d", &X[i]);
    }
    printf("\nTable A\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nList X\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", X[i]);
    }

    printf("\nElements in Y\n");
    for (int i = 0; i < m; ++i)
    {
        Y[i] = 0;
        for (int j = 0; j < n; ++j)
        {
            Y[i] += A[i][j] * X[j];
        }
        printf("Y[%d] = %d\n", i + 1, Y[i]);
    }

    return 0;
}