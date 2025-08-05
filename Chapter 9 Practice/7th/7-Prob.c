//Create a structure representing a bank account of a customer.
#include<stdio.h>
#include<string.h>

struct banacc{
    int accNo;
    char name[20];
    char code[10];
    float balance;
};

int main()

{
    struct banacc c1;
    c1.accNo = 101;
    strcpy(c1.name, "Levi");
    strcpy(c1.code, "SBI001");
    c1.balance = 50000.50;
    printf("Account Holder Info.: %d %s %s %f\n", c1.accNo, c1.name, c1.code, c1.balance);
    return 0;
}