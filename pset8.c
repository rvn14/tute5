#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int a, b, c;

    printf("Enter values for a, b, c: ");
    scanf("%d %d %d",&a,&b,&c);

    if ( b == 0 && a == 0 )
    {
        printf("There is no solutiongit");
    }else if (a == 0)           
    {
        printf(" There is only one root");
    }else if (((b^2)-(4*a*c)) < 0)
    {
        printf("There are no roots");
    }else
    {
        printf("there are two real roots");
    }
    
    
    
    
    


    return 0;
}
