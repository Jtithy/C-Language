//Write a program to modify a file containing an integer to double its value.
#include<stdio.h>

int main()

{
    FILE *ptr;
    int num;
    printf("Enter number: \n");
    scanf("%d", &num);
    ptr = fopen("kira.txt", "w");
    fscanf(ptr, "%d", &num);
    fprintf(ptr, "%d", num);
    fclose(ptr);

    ptr = fopen("kira.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    
    ptr = fopen("kira.txt", "w");
    fprintf(ptr, "%d", 2*num);
    fclose(ptr);

    return 0;
}