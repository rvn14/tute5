#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main() {
    int x,y,z,maxx;

    scanf("%d %d %d",&x, &y, &z);
    
    if (y > x)
    {
        if (z > y)
        {
            printf("max num is %d", z);
        }else{
            printf("max num is %d", y);
        }       
    }else
    {
        if (z > x)
        {
            printf("max num is %d", z);
        }else
        {
            printf("max num is %d", x);
        }
        
        
    }
    
    


}