// Write a program to change the value of a variable to ten times of its current value.
#include<stdio.h>

int change_ten_times(int*);

int change_ten_times(int* p)
{
    *p = *p * 10;
    return 0;
}
int main()

{
    int x=45;
    printf("The value of x is: %d\n", x);
    change_ten_times(&x);
    printf("The value of x is: %d\n", x);
    return 0;
}