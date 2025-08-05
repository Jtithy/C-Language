//Write a program to illustrate the use of arrow operator.
#include<stdio.h>

typedef struct employee
{
    int id;
    char name[20];
} emp;

int main()

{
    emp e1;
    emp *ptr = &e1;
    ptr->id = 101;
    ptr->name[0] = 'A';
    printf("The value of employee name & id: %s %d\n", ptr->name, ptr->id);
    return 0;
}