//Write a program to take string as input using %c and %s confirms that the strings are same.
#include<stdio.h>

int main()

{
    char str2[5];


    for(int i=0; i<4; i++)
    {
        scanf("%c", &str2[i]);
        fflush(stdin);
    }
    printf("The string is: %s\n", str2);
    str2[5] = '\0';
    return 0;
}