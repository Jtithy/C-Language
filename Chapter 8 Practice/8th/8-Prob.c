//Write a program to check wheather a given character is present in a string or not.
#include<stdio.h>
#include<string.h>
int main()

{
    char str[]= "Levi Ackerman";
    char c = 'a';
    int contains = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] == c)
        {
        contains = 1;
        break;
        }
    }
    if(contains){
        printf("The character is present.\n");
    }
    else{
        printf("The character is not present.\n");
    }
    return 0;
}