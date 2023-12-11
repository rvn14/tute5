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
    char userInp[1];

    
    

    while (1>0)
    {
        printf("\nEnter the amount of tendering: ");
        scanf("%d", &tenderedAmount);

        printf("\nEnter the value of the stamp (25, 15, 10): ");
        scanf("%d", &stampValue);

        if (stampValue != 25 && stampValue != 15 && stampValue != 10)
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
            switch (tenderedAmount)
            {
            case 50:
                coinCount[0] ++;
                break;
            case 25:
                coinCount[1] ++;
                break;
            case 10:
                coinCount[2] ++;
                break;
            case 5:
                coinCount[3] ++;
                break;
                        }

            dispensedStamp = stampValue;
            switch (dispensedStamp)
            {
            case 25:
                stampCount[0] - 1;
                break;
            case 15:
                stampCount[1] - 1;
                break;
            case 10:
                stampCount[2] - 1;
                break;
            
            }
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
                    switch (coins[i])
                    {
                    case 50:
                        coinCount[0] --;
                        break;
                    case 25:
                        coinCount[1] --;
                        break;
                    case 10:
                        coinCount[2] --;
                        break;
                    case 5:
                        coinCount[3] --;
                        break;
                    }

                    
            }

            
            
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {
            printf("\n%d Coin count: %d", coins[i], coinCount[i]);
        }

       printf("\n\nDo you want to exit? (y/n) : ") ;
       scanf("%s", &userInp);

       if (userInp[0] == 121)
       {
        printf("\nVender turning off.....");
        break;
       }
       

        

    }
    
    


    
}
return 0;
}


