#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char name[10];
    float weight, height, bmi;
    
    printf("Enter Your name,weight and height: ");
    scanf("%s %f %f", &name, &weight, &height);


    bmi = weight/(height*height);

    if (bmi >= 27.5)
    {
        printf("\n\nyour BMI is %f\n", bmi);
        printf("You might have a high risk of developing heart disease, high blood pressure, stroke, diabetes");
    }
    else if (bmi < 27.5 && bmi >= 23)
    {
        printf("\n\nyour BMI is %f\n", bmi);
        printf("You might have a moderate risk of developing heart disease, high blood pressure, stroke, diabetes ");
    }
    else if (bmi < 23 && bmi >= 18.5)
    {
        printf("\n\nyour BMI is %f\n", bmi);
        printf("Low Risk (healthy range)");
    }
    else
    {
        printf("\n\nyour BMI is %f\n", bmi);
        printf("You might have a risk of developing problems such as nutritional deficiency and osteoporosis");
    }
    




    return 0;
}
