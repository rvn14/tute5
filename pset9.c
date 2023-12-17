#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int side1, side2, side3;

    // Input sides from the user
    printf("Enter three integer values of the legnths of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    // Check if the entered sides form a right-angled triangle
    if (side1 * side1 + side2 * side2 == side3 * side3 || side1 * side1 + side3 * side3 == side2 * side2 || side2 * side2 + side3 * side3 == side1 * side1)
    {
        printf("The entered sides (%d, %d, %d) form a right-angled triangle.\n", side1, side2, side3);
    }
    else
    {
        printf("The entered sides do not form a right-angled triangle.\n");
    }

    return 0;
}

