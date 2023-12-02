#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main() {

    float a,b,c,d;
    float ratio;

    scanf("%f %f %f %f", &a, &b, &c, &d);
    if ((c-d) == 0)
    {
        printf("c-d is zero!");
    }else
    {
        ratio = (a + b) / (c - d);
        printf("%f",ratio);
    }
    
    
}