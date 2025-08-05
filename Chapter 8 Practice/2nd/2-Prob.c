//Write a starlen function.
#include<stdio.h>

int strlen(char str2[])
{
    int i = 0;
    int count;
    char c = str2[i];

    while(c!='\0')
    {
        c = str2[i];
        i++;
    }
    count = i - 1;
    return count;
}
int main()

{
    char str2[]= "abcdefgh";
    int result = strlen(str2);
    printf("The string: %d\n", result);
    return 0;
}