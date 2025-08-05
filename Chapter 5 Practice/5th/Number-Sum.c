//Write a function to calculate the sum of first n natural numbers.
#include<stdio.h>

int sum(int);

int sum(int N){
    int sum = 0;
    for(int i=0; i<=N; i++){
        sum += i;
    }
    return sum;
}
int main()

{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result = sum(n);
    printf("The sum of first %d natural numbers is: %d\n", n, result);
    return 0;
}