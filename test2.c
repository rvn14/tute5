#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coin, change, x;
    int stamp_price;
    int s_10 = 5, s_15 = 5, s_25 = 5;
    int coin_5 = 5, coin_10 = 5, coin_25 = 5, coin_50 = 5;
    char a[2];

    while (1 > 0)
    {
        printf("\nEnter the stamp price (25 or 15 or 10): ");
        scanf("%d", &stamp_price);

        if (stamp_price == 10 || stamp_price == 15 || stamp_price == 25)
        {
            printf("Enter the coin (coin 5 or coin 10 or coin 25 or coin 50): ");
            scanf("%d", &coin);
            if (stamp_price <= coin)
            {
                if (coin == 50 || coin == 25 || coin == 10 || coin == 5)
                {
                    if ((stamp_price == 10) && (s_10 != 0))
                    {
                        change = coin - stamp_price;
                        if (change == 40)
                        {
                            printf("\nchange = 25 coin + 10 coin + 5 coin\n\n");
                            printf("Remaining 50 coins: %d\n", ++coin_50);
                            printf("Remaining 25 coins: %d\n", --coin_25);
                            printf("Remaining 10 coins: %d\n", --coin_10);
                            printf("Remaining 05 coins: %d\n", --coin_5);
                            printf("Remaining 10 stamps: %d\n", --s_10);
                            printf("Remaining 15 stamps: %d\n", s_15);
                            printf("Remaining 25 stamps: %d\n\n", s_25);
                        }
                        else if (change == 15)
                        {
                            printf("\nchange = 10 coin + 5 coin\n\n");
                            printf("Remaining 50 coins: %d\n", coin_50);
                            printf("Remaining 25 coins: %d\n", ++coin_25);
                            printf("Remaining 10 coins: %d\n", --coin_10);
                            printf("Remaining 05 coins: %d\n", --coin_5);
                            printf("Remaining 10 stamps: %d\n", --s_10);
                            printf("Remaining 15 stamps: %d\n", s_15);
                            printf("Remaining 25 stamps: %d\n\n", s_25);
                        }
                        else if (change == 0)
                        {
                            printf("\nNo change\n\n");
                            printf("Remaining 50 coins: %d\n", coin_50);
                            printf("Remaining 25 coins: %d\n", coin_25);
                            printf("Remaining 10 coins: %d\n", ++coin_10);
                            printf("Remaining 05 coins: %d\n", coin_5);
                            printf("Remaining 10 stamps: %d\n", --s_10);
                            printf("Remaining 15 stamps: %d\n", s_15);
                            printf("Remaining 25 stamps: %d\n\n", s_25);
                        }
                    }

                    if ((stamp_price == 15) && (s_15 != 0))
                    {
                        change = coin - stamp_price;
                        if (change == 35)
                        {
                            printf("\nchange = 25 coin + 10 coin\n\n");
                            printf("Remaining 50 coins: %d\n", ++coin_50);
                            printf("Remaining 25 coins: %d\n", --coin_25);
                            printf("Remaining 10 coins: %d\n", --coin_10);
                            printf("Remaining 05 coins: %d\n", coin_5);
                            printf("Remaining 10 stamps: %d\n", s_10);
                            printf("Remaining 15 stamps: %d\n", --s_15);
                            printf("Remaining 25 stamps: %d\n\n", s_25);
                        }
                        else
                        {
                            printf("\nchange = 10 coin\n\n");
                            printf("Remaining 50 coins: %d\n", coin_50);
                            printf("Remaining 25 coins: %d\n", ++coin_25);
                            printf("Remaining 10 coins: %d\n", --coin_10);
                            printf("Remaining 05 coins: %d\n", coin_5);
                            printf("Remaining 10 stamps: %d\n", s_10);
                            printf("Remaining 15 stamps: %d\n", --s_15);
                            printf("Remaining 25 stamps: %d\n\n", s_25);
                        }
                    }

                    if (stamp_price == 25 && s_25 != 0)
                    {
                        change = coin - stamp_price;
                        if (change == 25)
                        {
                            printf("\nchange = 25 coin\n\n");
                            printf("Remaining 50 coins: %d\n", ++coin_50);
                            printf("Remaining 25 coins: %d\n", --coin_25);
                            printf("Remaining 10 coins: %d\n", coin_10);
                            printf("Remaining 05 coins: %d\n", coin_5);
                            printf("Remaining 10 stamps: %d\n", s_10);
                            printf("Remaining 15 stamps: %d\n", s_15);
                            printf("Remaining 25 stamps: %d\n\n", --s_25);
                        }
                        else
                        {
                            printf("\nchange = 0\n\n");
                            printf("Remaining 50 coins: %d\n", coin_50);
                            printf("Remaining 25 coins: %d\n", ++coin_25);
                            printf("Remaining 10 coins: %d\n", coin_10);
                            printf("Remaining 05 coins: %d\n", coin_5);
                            printf("Remaining 10 stamps: %d\n", s_10);
                            printf("Remaining 15 stamps: %d\n", s_15);
                            printf("Remaining 25 stamps: %d\n\n", --s_25);
                        }
                    }
                }
                else
                {
                    printf("\nInvalid values\n\n");
                }
            }
            else
            {
                printf("\nInsufficient amount tendered\n");
            }
        }
        else
        {
            printf("\nInvalid values\n\n");
        }

        printf("\nDo you want to quit? Enter y or n\n");
        scanf("%s", a);

        if (a[0] == 121)
        {
            exit(0);
        }
    }

    return 0;
}