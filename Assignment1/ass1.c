#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    
    int stampValue,tenderedAmount,dispensedStamp,change  ;
    int coins[] = {50, 25, 10, 5};
    int coinCount[] = {5, 5, 5, 5};
    int stampCount[] = {5, 5, 5};
    int chngCoins[] = {0, 0, 0, 0};
    char userinp[1];

    
    

    while (1>0)
    {
        printf("\nEnter the amount of tendering: ");
        scanf("%d", &tenderedAmount);

        printf("\nEnter the value of the stamp (50, 25, 10): ");
        scanf("%d", &stampValue);

        if (stampValue != 50 && stampValue != 25 && stampValue != 10)
        {
            printf("\nError! Invalid Stamp value entered\nCoin returned.");
        }
        else if (tenderedAmount < stampValue)
        {
            printf("\nError! Insufficient amount tendered\nCoin returned.");
        }
        else if (tenderedAmount != 50 && tenderedAmount != 25 && tenderedAmount != 10 && tenderedAmount != 5)
        {
            printf("\nError! Invalid Coin tendered.\nCoin returned.");
        }
        else
        {
            dispensedStamp = stampValue;
            change = (tenderedAmount - stampValue);

            printf("\n\nA Rs.%d.00 stamp has been dispensed\n", dispensedStamp);

            printf("\nYour change is Rs.%d.00\n", change);

            for (int i = 0; i < 4; i++)
            {
                chngCoins[i] = change / coins[i];
                change %= coins[i];

                if (chngCoins[i] > 0)
                {
                    printf("\nChange from %d coins : %d", coins[i], chngCoins[i]);
                }
            }
        }

       printf("\n\nDo you want to exit? (y/n) : ") ;
       scanf("%s", &userinp);

       if (userinp[0] == 121)
       {
        printf("\nVender turning off.....");
        break;
       }
       

        

    }
    
    


    return 0;
}
