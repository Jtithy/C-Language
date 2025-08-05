// Write a function and pass the value by reference.
#include<stdio.h>

int reference(int* p)
{
    *p = 10;
}
int main()

{
    int x = 5;
    printf("The value of x is: %d\n", x);
    int q = reference(&x);
    printf("The value of x is: %d\n", x);
    return 0;
} 