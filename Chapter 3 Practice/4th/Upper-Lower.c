// Write a C program to find a character entered by the user is lowercase or uppercase.
#include<stdio.h>

int main()

{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("The character is lowercase.\n");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("The character is uppercase.\n");
    }
    else{
        printf("Invalid character.\n");
    }    
    return 0;
}