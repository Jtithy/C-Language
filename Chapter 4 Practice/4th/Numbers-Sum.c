//Write a program to sum first 10 numbers using 'for' and 'do-while' loop.
#include<stdio.h>

int main()

{
    int n=10, sum=0;
    //Using for loop
    printf("Using for loop:\n");
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    //Using do-while loop
    sum = 0; 
    int i=1;
    printf("Using do-while loop:\n");
    do{
        sum += i;
        i++;
    }while(i<=n);
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}