//Write a program to check whether a number is prime or not using loops.
#include<stdio.h>

int main()

{
    int N;
    int isPrime = 1; 
    printf("Enter a number to check:\n");
    scanf("%d", &N);
    if(N == 0 || N == 1){
        isPrime = 0;
    }
    else if(N == 2){
        isPrime = 1;
    }    
    else{
        for(int i=2; i<N; i++){
        if(N%i == 0){
            isPrime = 0;
            break;
        }
      }
    }           
    if(isPrime == 1){
        printf("%d is a prime number\n", N);
    }
    else{
        printf("%d is not a prime number\n", N);
    }
    return 0;
}