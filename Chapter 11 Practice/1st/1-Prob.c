//Write a program to dynamically create an array of size 6 capable of storing 6 integers.
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n = 6;
    int i;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for(i = 0; i<6; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The Array is:\n");
    for(i = 0; i<6; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}