/* Write a program using function to print the following pattern:
*
***
*****
*/

#include<stdio.h>

int print_pattern(int); 

int print_pattern(int n){
    int i, j;
    for(i=0; i<n; i++){
        /*i=0, 1*
        i=1, 3*
        i=2, 5*
        no. of stars = 2*i+1
        */
        for(j=0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main()

{
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    int result = print_pattern(N);
    printf("The pattern is printed successfully.\n");
    return 0;
}