/*Write a C program to calculate area of a ractangle:
-using user input*/
#include<stdio.h>
int main()
{
    float length, width, area;
    printf("Input the length & width: \n");
    scanf("%f %f", &length, &width); 
    area = length*width;
    printf("The area is: %2f\n", area);
    return 0;
}