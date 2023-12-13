#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void runVender()
{
    int stampValue, tenderedAmount, change;
    int coins[] = {50, 25, 10, 5};
    int stamps[] = {25, 15, 10};
    int coinCount[] = {5, 5, 5, 5};
    int stampCount[] = {5, 5, 5};
    int chngCoins[] = {0, 0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        printf("%d", stampCount[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d", coinCount[i]);
    }

    printf("%d", stampValue);

    printf("\nEnter the value of the stamp (25, 15, 10): ");
    scanf("%d", &stampValue);

    

    switch (stampValue)
    {
    case 25:
        if (stampCount[0] <= 0)
        {
            printf("Stamps of Rs.25 not available");
            return;
        }

        break;
    case 15:
        if (stampCount[1] <= 0)
        {
            printf("Stamps of Rs.15 not available");
            return;
        }

        break;
    case 10 :
        if (stampCount[0] <= 0)
        {
            printf("Stamps of Rs.10 not available");
            return;
        }
        break;
    default:{
        printf("Invalid Stamp value requested");
        return;
    }
    break;
    }

    printf("\nEnter the amount of tendering: ");
    scanf("%d", &tenderedAmount);

    switch (tenderedAmount)
    {
    case 50:
        coinCount[0]++;
        break;
    case 25:
        coinCount[1]++;
        break;
    case 10:
        coinCount[2]++;
        break;
    case 5:
        coinCount[3]++;
        break;

    default:
    {
        printf("Invalid Coin tendered");
        return;
    }
    break;
    }

    change = (tenderedAmount - stampValue);

    if (stampValue == 0)
    {
        printf("\n\nNo stamp has been dispensed\n", stampValue);
    }
    else if ((coinCount[0] != 0) && (coinCount[1] != 0) && ((coinCount[2] != 0)) && (coinCount[3] != 0))
    {
        printf("\n\nA Rs.%d.00 stamp has been dispensed\n", stampValue);
        switch (stampValue)
        {
        case 25:
            stampCount[0]--;
            break;

        case 15:
            stampCount[1]--;
            break;

        case 10:
            stampCount[2]--;
            break;

        default:
            break;
        }
    }

    if ((coinCount[0] == 0) || (coinCount[1] == 0) || ((coinCount[2] == 0)) || (coinCount[3] == 0))
    {
        printf("No change Available");
        printf("\n%d Coin dispensed", tenderedAmount);
        switch (tenderedAmount)
        {
        case 50:
            coinCount[0]--;
            break;
        case 25:
            coinCount[1]--;
            break;
        case 10:
            coinCount[2]--;
            break;
        case 5:
            coinCount[3]--;
            break;
        }
    }
    else
    {
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
                    coinCount[0]--;
                    break;
                case 25:
                    coinCount[1]--;
                    break;
                case 10:
                    coinCount[2]--;
                    break;
                case 5:
                    coinCount[3]--;
                    break;
                }
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d Stamp count: %d", stamps[i], stampCount[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d Coin count: %d", coins[i], coinCount[i]);
    }
}





int main()
{
    
    char userInp;



    


    while (1)
    {
        
        
        runVender();

        printf("\nDo you want to perform another transaction? (y/n): ");
        scanf(" %c", &userInp);

        if (userInp == 'n' || userInp == 'N')
        {
            break;
        }
        
    }
    









    return 0;
}
