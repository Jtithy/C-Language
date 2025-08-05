/*Write a program to read a text file character by character and
write its contemnt twice in seperate file. */
#include <stdio.h>

int main()

{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("megumi.txt", "r");
    ptr2 = fopen("megumi2.txt", "w");
    while (1)
    {
        ch = fgetc(ptr);
        
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}