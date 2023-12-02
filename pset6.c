#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int cusnum, units,sub;
    float fprice = 0;

    scanf("%d %d", &cusnum, &units);

    sub = ((units/100)*100);

    if (units>400)
    {
        fprice += (units-sub)*32.50 + 5000;
    }else if (units>300)
    {
        fprice += (units - sub) * 21.50 + 2850;
    }else if (units>200)
    {
        fprice += (units - sub) * 14.50 + 1400;
    }else if (units>100)
    {
        fprice += (units - sub) * 8.50 + 550;
    }else if (units>0)
    {
        fprice += (units) * 5.50;
    }
     
    
    printf("%d\n", sub);
    printf("Rs: %.2f", fprice);
    
    
    return 0;
}
