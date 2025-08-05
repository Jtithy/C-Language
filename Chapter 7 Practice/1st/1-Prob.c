/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) 
points to the third element where ptr is a pointer to the first element.
*/
#include<stdio.h>

int main()

{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("The value at address %u is %d\n", ptr+3, *(ptr+3));
    printf("The value at address %u is %d\n", ptr+2, *(ptr+2));
    return 0;
}