#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{   
    int xvalue, yvalue ;

    printf("Enter x: ");
    scanf("%d", &xvalue);

    yvalue = (xvalue > 0)? 1 : (xvalue == 0)? 0 : -1 ;

    printf("%d", yvalue);


    return 0;
}
