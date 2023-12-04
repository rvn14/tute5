#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    
    const int L1CA = 1000;
    const int L1EA = 500;
    const int L2CA = 750;
    const int L2EA = 200;
    const int L3CA = 500;
    const int L3EA = 100;
    const int L4CA = 250;
    const int L4EA = 0;

    int jobnum, levelnum, basicsal, grosssal, netsal;



    printf("Enter <job number> <level number> <basic salary> : ");
    scanf("%d %d %d", &jobnum, &levelnum, &basicsal);


    // if (levelnum == 1)
    // {
    //     grosssal = basicsal + (0.25*basicsal) + L1CA + L1EA;
    // }
    // else if (levelnum == 2)
    // {
    //     grosssal = basicsal + (0.25 * basicsal) + L2CA + L2EA;
    // }
    // else if (levelnum == 3)
    // {
    //     grosssal = basicsal + (0.25 * basicsal) + L3CA + L3EA;
    // }
    // else if (levelnum == 4) 
    // {
    //     grosssal = basicsal + (0.25 * basicsal) + L4CA + L4EA;
    // }

    switch (levelnum)
    {
    case 1:
        grosssal = basicsal + (0.25 * basicsal) + L1CA + L1EA;
        break;
    case 2:
        grosssal = basicsal + (0.25 * basicsal) + L2CA + L2EA;
        break;
    case 3:
        grosssal = basicsal + (0.25 * basicsal) + L3CA + L3EA;
        break;
    case 4:
        grosssal = basicsal + (0.25 * basicsal) + L4CA + L4EA;
        break;

    }

    if (grosssal < 2000)
    {
        netsal = grosssal;
    }
    else if (grosssal >= 2000 && grosssal < 4000)
    {
        netsal = grosssal - grosssal*0.03;
    }
    else if (grosssal >= 4000 && grosssal < 6000)
    {
        netsal = grosssal - grosssal*0.05;
    }
    else if (grosssal >= 6000)
    {
        netsal = grosssal - grosssal*0.08;
    }

    
    printf("%d Net-Salary : Rs: %d.00", jobnum, netsal);


    return 0;
}
