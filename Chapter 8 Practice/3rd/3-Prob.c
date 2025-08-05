/*Write a funtion slice() to slice a string. The function should change the string such that it's 
now a slice of the original string. Take 'm' and 'n' as the start and end position for slice.
*/
#include<stdio.h>

char* slice(char str2[], int m, int n)
{
    int i = 0;
    char c = str2[i];
    char *ptr1 = &str2[m];
    char *ptr2 = &str2[n];

    str2 = ptr1;
    str2[n] = '\0';
    return str2;
}
int main()

{
    char str2[]= "abcdefgh";
    char result = slice(str2, 1, 5);
    printf("The sliced string: %s\n", result);
    return 0;
}