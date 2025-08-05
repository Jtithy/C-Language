//Write a program to check the occurrence of a given character in a string.
#include<stdio.h>
#include<string.h>
int main()

{
    char str[]= "Levi Ackerman";
    char c = 'a';
    int count = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] == c)
        {
        count++;
        }
    }
    printf("The string: %d\n", count);
    return 0;
}