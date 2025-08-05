//Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>

int main()

{
    int N = 10;
    printf("Multiplication table of %d in reversed order:\n", N);
    for(int i=10; i>=1; i--){
        printf("%d x %d = %d\n", N, i, N*i);
    }
    return 0;
}