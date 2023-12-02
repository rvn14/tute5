#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main(){

    char name[20];
    char gender;
    int balance;
    int fbalance;

    scanf("%s %c %d", &name, &gender, &balance);

    if ((balance > 5000) && (gender == 70))
    {
        fbalance = balance+(balance*0.07);
    }  else
    {
        fbalance = balance+(balance*0.02);
    }
    
    
    printf("%s's final Balance is Rs.%d", name, fbalance);



}