//Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>

// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, ...
int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
int main()

{
    int N;
    printf("Enter the position of Fibonacci series: ");
    scanf("%d", &N);
    int result = fibonacci(N);
    printf("The %dth element of Fibonacci series is: %d\n", N, result);
    return 0;
}