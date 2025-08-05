/*Create a dynamic array capable of storing 5 integers. Now use realloc
so that it can now store 10 integers.*/
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n = 5;
    int i;
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));
    printf("Enter the elements:\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The Array is:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d", ptr[i]);
    }
    n = 10;
    ptr = (int*) realloc(ptr, 10* sizeof(int)); 

    printf("\nEnter the elements:\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The Array is:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}