/* Calculate income tax paid by an employee to the govt. as per the stabs mentioned below:
     Income Slab      Tax
     2.5-5.0L          5%
     5.0-10.0L        20%
     Above 10.0L      30%
*/

#include<stdio.h>

int main()

{
    float income, tax;
    printf("Enter the income: ");
    scanf("%f", &income);
    if(income <= 250000){
        tax = 0;
    }
    else if(income > 250000 && income <= 500000){
        tax = (income - 250000) * 0.05;
    }
    else if(income > 500000 && income <= 1000000){
        tax = (income - 500000) * 0.20 + (250000 * 0.05);
    }
    else{
        tax = (income - 1000000) * 0.30 + (500000 * 0.20) + (250000 * 0.05);
    }
    printf("The tax to be paid is %.2f\n", tax);
    return 0;
}