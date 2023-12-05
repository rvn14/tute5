#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int table[10][10], xlist[10], ylist[6], sum;


    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter %dst line: ",(i+1));
        scanf("%d %d %d %d %d %d %d %d", &table[i][0], &table[i][1], &table[i][2], &table[i][3], &table[i][4], &table[i][5], &table[i][6], &table[i][7]);

    }


    printf("\nEnter X: ");
    scanf("%d %d %d %d %d %d %d %d", &xlist[0], &xlist[1], &xlist[2], &xlist[3], &xlist[4], &xlist[5], &xlist[6], &xlist[7]);

    printf("Table A\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("| ");
            printf("%d | ", table[i][j]);
        }
        printf("\n");
    }

    printf("\nList X\n");
    for (int i = 0; i < 8; i++)
    {
        printf("| ");
        printf("%d |", xlist[i]);
    }

    printf("\nElements of Y\n");

    for (int i = 0; i < 6; i++)
    {
        sum = 0 ;
        for (int j = 0; j < 8; j++)
        {
            sum += table[i][j]; 
            
        }
        ylist[i] = sum ;
        printf("Y[%d] = %d\n", i+1, ylist[i]);
    }
    

    
    

            return 0;
}
