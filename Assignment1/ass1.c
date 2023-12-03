#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    
    int stampValue,tenderedAmount,dispensedStamp,change  ;

    
    

    printf("Enter the amount of tendering: ");
    scanf("%d", &tenderedAmount);

    printf("Enter the value of the stamp (50, 25, 10): ");
    scanf("%d" , &stampValue);

    if (stampValue != 50 && stampValue != 25 && stampValue != 10)
    {
        printf("Error! Invalid Stamp value entered.");
    }
    else if (tenderedAmount < stampValue)
    {
        printf("Error! Insufficient amount tendered.");
    }
    else if (tenderedAmount != 50 && tenderedAmount != 25 && tenderedAmount != 10 && tenderedAmount != 5)
    {
        printf("Error! Invalid Coin tendered.");
    }
    else
    {
        dispensedStamp = stampValue;
        change = (tenderedAmount - stampValue);

        
        


    }
    
    

    return 0;
}
