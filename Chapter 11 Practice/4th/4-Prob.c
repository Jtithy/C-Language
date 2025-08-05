/*
Create an array of multiplication table of 7 upto 10 (7 x 10-70).
Use realloc to make it store 15 number (from 7 x 1 to 7 x 15). 
*/
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n = 10;
    int i;
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));
    printf("Enter the elements:\n");
    for(i = 0; i<n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    printf("The Array is:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}