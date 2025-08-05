//Create an array of size 3x10 containing multiple tables of the numbers 2, 7 and 9 respectively.
#include<stdio.h>

int main()

{
    int arr[3][10];
    int multiple[] = {2, 7, 9};
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