//Write a strcpy function.
#include<stdio.h>
#include<string.h>

int mystrlen(char str2[])
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
void mystrcpy(char target[], char source[])
{
    for(int i = 0; i < mystrlen(source) ; i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}
int main()

{
    char source[] = "Levi";
    char target[10];
    mystrcpy(target, source);
    printf("The copied string: %s\n", source, target);
    return 0;
}