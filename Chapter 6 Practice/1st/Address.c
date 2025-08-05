//Write a C program to print the address of a variable using pointer. Use the address to ger the value of the variable.
#include<stdio.h>

int main()

{
    int i = 72;
    int* p = &i;
    printf("The address of i is: %p\n", p);
    printf("The address of i is: %p\n", &i);
    printf("The value of i is: %d\n", *p);
    return 0;
}