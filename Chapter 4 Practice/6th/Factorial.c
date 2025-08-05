//Write a program to print calculate the factorial of a given number using for loop.
#include<stdio.h>

int main()

{
    int N;
    int product =1;
    printf("Enter a number to calculate its factorial:\n");
    scanf("%d", &N);
    //5! = 5*4*3*2*1
    //3! = 3*2*1
    for(int i=1; i<=N; i++){
        product *=i;
    }
    printf("Factorial of %d is %d\n", N, product);
    return 0;
}