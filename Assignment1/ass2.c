#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int sum = 0, m, n;



    while (1)
    {
        printf("Enter size of the matrix A (m n): ");
        scanf("%d %d", &m, &n);

        if (m>0 && n>0)
        {
            
            break;
        }
        printf("\nOnly enter positive values!\n");
    }
    

        

    

    

    int table[m][n], xlist[n], ylist[n];

    for (int i = 0; i < m; i++)
    {
        printf("\nEnter %dst line\n",(i+1));
        for (int j = 0; j < n; j++)
        {
            printf("Enter value for %dx%d: ", i+1, j+1);
            scanf("%d",&table[i][j]);
        }
        

    }


    printf("\nEnter X: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %dx1: ", i+1);
        scanf("%d", &xlist[i]);
    }
    

    printf("\nTable A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("| ");
            printf("%d | ", table[i][j]);
        }
        printf("\n");
    }

    printf("\nList X\n");
    for (int i = 0; i < n; i++)
    {
        
        printf("| %d |", xlist[i]);
    }

    printf("\nElements of Y\n");

    for (int i = 0; i < m; i++)
    {
        sum = 0 ;
        for (int j = 0; j < n; j++)
        {
            sum += table[i][j]*xlist[j]; 
            
        }
        ylist[i] = sum ;
        printf("Y[%d] = %d\n", i+1, ylist[i]);
    }

    printf("\nList Y\n");
    for (int i = 0; i < m; i++)
    {
        printf("| ");
        printf("%d |", ylist[i]);
    }

            return 0;
}
