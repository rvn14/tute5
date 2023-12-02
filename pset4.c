#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void withif(int stunum, float avggrd){
    

    if (avggrd<=39)
    {
        printf("%d is Fail",stunum);
    }else if (avggrd<=49)
    {
        printf("%d got Third Division", stunum);
    }else if (avggrd<=59)
    {
        printf("%d got Second Division", stunum);
    }else if (avggrd<=79)
    {
        printf("%d got First Division", stunum);
    }else if (avggrd<=100)
    {
        printf("%d got Honours",stunum);
    }
    


}

void withswitch(int stunum, int avggrd)
{

    switch (avggrd)
    {
    case 0 ... 39:
        printf("%d is Fail", stunum);
        break;
    case 40 ... 49:
        printf("%d got Third Division", stunum);
        break;
    case 50 ... 59:
        printf("%d got Second Division", stunum);
        break;
    case 60 ... 79:
        printf("%d got First Division", stunum);
        break;
    case 80 ... 100:
        printf("%d got Honours", stunum);
        break;

    default:
        break;
    }



}

void main()
{
    
    int stunum ;
    float avggrd;

    scanf("%d %f", &stunum,&avggrd);

    // withif(stunum, avggrd);
    withswitch(stunum, avggrd);


    
}
