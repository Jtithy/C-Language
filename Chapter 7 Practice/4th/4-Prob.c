//Write a program containing a function which reverses the array passed to it.
#include<stdio.h>

void print_arr(int arr[], int n)
{
    printf("The array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse_arr(int arr[], int n)
{
    printf("The reversed array is:\n");
    for(int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
} 

int main()
{
    int arr[]= {1, 2, 3, 4, 5};
    print_arr(arr, 5);
    reverse_arr(arr, 5);
    return 0;
}
