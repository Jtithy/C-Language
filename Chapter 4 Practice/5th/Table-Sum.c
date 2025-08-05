/* Write a program to calculate the sum of the numbers occuring
    in the multiplication table of 8. */
#include<stdio.h>

int main()

{
    int N = 8, sum = 0;
    printf("Multiplication table of %d:\n", N);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", N, i, N*i);
        sum += N*i;
    }
    printf("Sum of the numbers in the multiplication table of %d is %d\n", N, sum);
    return 0;
}