#include <stdio.h>
#include <math.h>

int main()
{
    
    float a, b, c, discriminant, root1, root2;

    
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a == 0)
    {
    
        if (b == 0)
        {
            
            printf("No solution.\n");
        }
        else
        {
            
            root1 = -c / b;
            printf("Single root: %f\n", root1);
        }
    }
    else
    {
        
        discriminant = b * b - 4 * a * c;

        
        if (discriminant < 0)
        {
            
            printf("No real roots.\n");
        }
        else if (discriminant == 0)
        {
            
            root1 = -b / (2 * a);
            printf("Single root: %f\n", root1);
        }
        else
        {
            
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two real roots: %f and %f\n", root1, root2);
        }
    }

    return 0;
}
