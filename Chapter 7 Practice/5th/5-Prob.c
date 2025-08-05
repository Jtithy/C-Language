//Write a C program to containing function which counts the number of positive integers in an array.
#include<stdio.h>

int count_positive(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            count++;
        }
    }
    return count;
}

int main()

{
    int arr[] = {1, -2, 3, -4, 5};
    printf("The number of positive integers: %d\n", count_positive(arr, 5));
    return 0;
}