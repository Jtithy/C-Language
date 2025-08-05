//Write a program to decrypt a string encripted using encrypting function.
#include<stdio.h>
#include<string.h>
int main()

{
    char str[]= "Obobnj!Lfoup";
    for(int i=0; i<strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("The encrypted string: %s\n", str);
    return 0;
}