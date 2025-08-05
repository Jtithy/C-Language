//Write a program to encrypt a string by adding 1 to the ascii value of its characters.
#include<stdio.h>
#include<string.h>
int main()

{
    char str[]= "Nanami Kento";
    for(int i=0; i<strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("The encrypted string: %s\n", str);
    return 0;
}