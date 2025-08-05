//Write a program to create an array of 10 integers and store multiple table of user number in it. 
#include<stdio.h>

int main()

{
    int N;
    printf("The integer number:\n");
    scanf("%d\n", &N);
    int arr[10];
    for(int i=0; i<10; i++){
        arr[10] = N * (i+1);
        printf("%d ", arr[i]);
    }  
    return 0;
}