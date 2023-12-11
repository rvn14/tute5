#include <stdio.h>
#include <stdlib.h>

int main()
{

    int stampcount25 = 40, stampcount15 = 30, stampcount10 = 60;
    int coin50 = 50, coin25 = 60, coin10 = 45, coin5 = 40;
    int amounttendered;
    int requestedstamp;
    int change;
    int nextstamp;

    change = amounttendered - requestedstamp;

    do
    {
        printf("Request your stamp: ");
        scanf("%d", &requestedstamp);

        printf("Enter the amount: ");
        scanf("%d", &amounttendered);

        if ((requestedstamp == 25 && stampcount25 > 0) ||
            (requestedstamp == 15 && stampcount15 > 0) ||
            (requestedstamp == 10 && stampcount10 > 0))
        {

            if (requestedstamp <= amounttendered)
            {

                switch (requestedstamp)
                {
                case 25:
                    stampcount25--;
                    break;

                case 15:
                    stampcount15--;
                    break;

                case 10:
                    stampcount10--;
                    break;
                }

                switch (amounttendered)
                {
                case 50:
                    coin50++;
                    break;

                case 25:
                    coin25++;
                    break;

                case 10:
                    coin10++;
                    break;
                }
                change = amounttendered - requestedstamp;

                printf("Balance:  %d\n\n", change);
                switch (change)
                {

                case 40:
                    if (coin25 > 0 && coin10 > 0 && coin5 > 0)
                    {
                        coin25--;
                        coin10--;
                        coin5--;

                        printf("Returned coins: Rs.25,Rs.10,Rs.5 \n");
                    }
                    else
                    {
                        printf("Change is not available \n");
                    }
                    break;

                case 35:
                    if (coin25 > 0 && coin10 > 0)
                    {
                        coin25--;
                        coin10--;

                        printf("Returned coins: Rs.25,Rs.10 \n");
                    }
                    else
                    {
                        printf("Change is not available \n");
                    }
                    break;

                case 25:
                    if (coin25 > 0)
                    {
                        coin25--;

                        printf("Returned coins: Rs.25 \n");
                    }
                    else
                    {
                        printf("Change is not available \n");
                    }
                    break;

                case 15:
                    if (coin10 > 0 && coin5 > 0)
                    {

                        coin10--;
                        coin5--;

                        printf("Returned coins: Rs.10,Rs.5 \n");
                    }
                    else
                    {
                        printf("Change is not available \n");
                    }
                    break;

                case 10:
                    if (coin10 > 0)
                    {

                        coin10--;

                        printf("Returned coins: Rs.10 \n");
                    }
                    else
                    {
                        printf("Change is not available \n");
                    }
                    break;

                case 0:

                    printf("No change \n");
                }

                printf("Stamp dispensed successfully \n");
                printf("Value of the stamp: %d\n\n", requestedstamp);
            }

            else
            {
                printf("Insufficient amount tendered! \n");
            }
        }
        else
        {
            printf("No stamp available! \n");
        }

        printf("Total number of Rs.25 stamps: %d\n", stampcount25);

        printf("Total number of Rs.15 stamps: %d\n", stampcount15);

        printf("Total number of Rs.10 stamps: %d\n\n", stampcount10);

        printf("Remaining Rs.50 coins: %d\n", coin50);

        printf("Remaining Rs.25 coins: %d\n", coin25);

        printf("Remaining Rs.10 coins: %d\n", coin10);

        printf("Remaining Rs.5 coins: %d\n\n", coin5);

        printf("Enter 1 to purchase another stamp: ");
        scanf("%d", &nextstamp);

    } while (nextstamp == 1);
    printf("Thank You!");

    return 0;
}