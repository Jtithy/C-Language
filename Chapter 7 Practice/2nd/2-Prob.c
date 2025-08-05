//Write a program to create an array of 10 integers and store multiple table of 5 in it.
#include<stdio.h>

int main()

{
    int arr[10];
    //Multiple table of 5 as Array elements
    //arr[i] = 5 * (i+1); if i=0
    for(int i = 0; i < 10; i++){
        arr[i] = 5 * (i+1);
        printf("%d ", arr[i]);
    }
    return 0;
} 