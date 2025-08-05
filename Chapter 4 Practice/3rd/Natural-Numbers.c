//Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>

int main()

{
    int N =10, sum =0;
    int i=1;
    while(i<=N){
        sum += i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d\n", N, sum);
    return 0;
}