#include <stdio.h>

#define STAMP_VALUES \
    {                \
        25, 15, 10   \
    }
#define COIN_VALUES   \
    {                 \
        50, 25, 10, 5 \
    }
#define INITIAL_STAMP_COUNT \
    {                       \
        5, 5, 0             \
    }
#define INITIAL_COIN_COUNT \
    {                      \
        5, 5, 5, 5         \
    }

void displayInventory(int stampCount[], int coinCount[])
{
    printf("\nStamp counts:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d Stamp count: %d", STAMP_VALUES[i], stampCount[i]);
    }

    printf("\nCoin counts:");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d Coin count: %d", COIN_VALUES[i], coinCount[i]);
    }
}

int main()
{
    int stampCount[] = INITIAL_STAMP_COUNT;
    int coinCount[] = INITIAL_COIN_COUNT;
    int tenderedAmount, requestedStamp, dispensedStamp = 0;
    int change = 0;
    char userInp;

    do
    {
        printf("\nEnter the value of the stamp (25, 15, 10): ");
        scanf("%d", &requestedStamp);

        if (requestedStamp != 25 && requestedStamp != 15 && requestedStamp != 10)
        {
            printf("\nError! Invalid Stamp value entered.\n");
            continue;
        }

        printf("\nEnter the amount of tendering: ");
        scanf("%d", &tenderedAmount);

        if (tenderedAmount != 50 && tenderedAmount != 25 && tenderedAmount != 10 && tenderedAmount != 5)
        {
            printf("\nError! Invalid Coin tendered.\nCoin returned.\n");
            continue;
        }

        // Check if stamp is available
        int stampIndex = -1;
        for (int i = 0; i < 3; i++)
        {
            if (STAMP_VALUES[i] == requestedStamp && stampCount[i] > 0)
            {
                stampIndex = i;
                break;
            }
        }

        if (stampIndex == -1)
        {
            printf("\nError! Requested Stamp is not available.\n");
            displayInventory(stampCount, coinCount);
            continue;
        }

        // Check if sufficient amount tendered
        if (tenderedAmount < requestedStamp)
        {
            printf("\nError! Insufficient amount tendered. Coin returned.\n");
            displayInventory(stampCount, coinCount);
            continue;
        }

        // Dispense stamp
        dispensedStamp = requestedStamp;
        stampCount[stampIndex]--;

        // Calculate change
        change = tenderedAmount - dispensedStamp;

        // Return coin as change
        for (int i = 0; i < 4; i++)
        {
            int numCoins = change / COIN_VALUES[i];
            change %= COIN_VALUES[i];

            coinCount[i] += numCoins;
        }

        printf("\nStamp dispensed: Rs.%d.00", dispensedStamp);
        if (change > 0)
        {
            printf("\nChange returned: Rs.%d.00", change);
        }
        else
        {
            printf("\nNo change returned.");
        }

        displayInventory(stampCount, coinCount);

        printf("\nDo you want to perform another transaction? (y/n): ");
        scanf(" %c", &userInp);

    } while (userInp == 'y' || userInp == 'Y');

    printf("\nVending machine turning off.....\n");

    return 0;
}
