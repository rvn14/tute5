#include <stdio.h>

int main() {
    int stampValue, tenderedAmount, dispensedStamp, change;
    int coins[] = {50, 25, 10, 5};
    int stamps[] = {25, 15, 10};
    int coinCount[] = {5, 5, 5, 5};
    int stampCount[] = {5, 5, 0};
    char userInp[2];

    while (1) {
        printf("\nEnter the value of the stamp (25, 15, 10): ");
        scanf("%d", &stampValue);

        if (stampValue != 25 && stampValue != 15 && stampValue != 10) {
            printf("\nError! Invalid Stamp value entered.\n");
            continue;
        }

        printf("\nEnter the amount of tendering: ");
        scanf("%d", &tenderedAmount);

        if (tenderedAmount != 50 && tenderedAmount != 25 && tenderedAmount != 10 && tenderedAmount != 5) {
            printf("\nError! Invalid Coin tendered.\nCoin returned.\n");
            continue;
        } else if (tenderedAmount < stampValue) {
            printf("\nError! Insufficient amount tendered\nCoin returned.\n");
            continue;
        } else {
            coinCount[tenderedAmount / 5 - 1]++;
            dispensedStamp = 0;

            for (int i = 0; i < 3; i++) {
                if (stamps[i] == stampValue && stampCount[i] > 0) {
                    dispensedStamp = stamps[i];
                    stampCount[i]--;
                    break;
                }
            }

            change = tenderedAmount - dispensedStamp;

            if (dispensedStamp == 0) {
                printf("\nNo stamp has been dispensed\n");
            } else {
                printf("\nA Rs.%d.00 stamp has been dispensed\n", dispensedStamp);
            }

            if (change > 0) {
                printf("Your change is Rs.%d.00\n", change);

                for (int i = 0; i < 4; i++) {
                    int numCoins = change / coins[i];
                    change %= coins[i];

                    if (numCoins > 0) {
                        printf("Change from %d coins: %d\n", coins[i], numCoins);
                        coinCount[i] -= numCoins;
                    }
                }
            } else {
                printf("No change available\n");
            }

            printf("\nStamp counts:");
            for (int i = 0; i < 3; i++) {
                printf("\n%d Stamp count: %d", stamps[i], stampCount[i]);
            }

            printf("\nCoin counts:");
            for (int i = 0; i < 4; i++) {
                printf("\n%d Coin count: %d", coins[i], coinCount[i]);
            }

            printf("\n\nDo you want to exit? (y/n) : ");
            scanf("%s", userInp);

            if (userInp[0] == 'y' || userInp[0] == 'Y') {
                printf("\nVending machine turning off.....\n");
                break;
            }
        }
    }

    return 0;
}
