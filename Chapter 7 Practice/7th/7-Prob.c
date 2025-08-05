//Create an array of size 3x10 containing multiple tables of user input.
#include<stdio.h>

int main()

{
    int n1, n2, n3;
    printf("The integer numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int multiple[] = {n1, n2, n3};
    //Multiple table of 2, 7 and 9
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            arr[i][j] = multiple[i] * (j + 1);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}