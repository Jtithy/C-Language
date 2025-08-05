/*Calculate simple interest for a set of value representing principal,
number of years & rate of interest*/
#include<stdio.h>

int main()

{
    float p, r, t, I;
    printf("Enter principal amount: \n");
    scanf("%f", &p);
    printf("Enter rate of interest: \n");
    scanf("%f", &r);
    printf("Enter time in years: \n");
    scanf("%f", &t);
    I = (p*r*t)/100;
    printf("Simple interest is: %.2f\n", I);
    return 0;
}