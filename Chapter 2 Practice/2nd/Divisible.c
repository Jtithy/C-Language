// Write a program to check whether a number is divisible by 97 or not?
#include<stdio.h>

int main()

{
    int A;
    printf("Enter a number: ");
    scanf("%d", &A);
    if(A % 97 ==0)
    {
        printf("The number is divisible.\n");
    }
    else{
        printf("The number is not divisible.\n");
    }
    return 0;
}