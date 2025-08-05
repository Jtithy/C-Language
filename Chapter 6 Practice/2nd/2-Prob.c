/*Write a C program having a variable 'i'. Print the address of 'i'.
Pass the variable to a function and print its address. */
#include<stdio.h>

int returnAddress_5(int* p)
{
    printf("The value of p is: %p\n", p);
    printf("The value at p is: %d\n", *p);
    return 5;
}
int main()

{
    int i = 72;
    int* p = &i;
    printf("The address of i is: %p\n", p);
    returnAddress_5(p);
    return 0;
} 