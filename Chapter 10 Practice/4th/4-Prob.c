/*Take name and salary of two employees as input from the user and write them to a text file in the following format: 
i. Name1, 3300 
ii. Name2, 7700 
*/
#include<stdio.h>

int main()

{
    FILE *ptr;
    char name1[50], name2[50];
    int salary1, salary2;
    ptr = fopen("mikasa.txt", "w");

    printf("Enter the name: \n");
    scanf("%s", &name1);
    printf("Enter the salary: \n");
    scanf("%d", &salary1);

    printf("Enter the name: \n");
    scanf("%s", &name2);
    printf("Enter the salary: \n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');
    fclose(ptr);
    return 0;
}