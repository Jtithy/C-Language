//Write a program to covert Celsius to Fahrenheit using function.
#include<stdio.h>

float Temperature(float);

float Temperature(float celsius){
    return ((celsius * 9) / 5) + 32;
}
int main()

{
    float c;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f", &c);
    float fahrenheit = Temperature(c);
    printf("The temperature in Fahrenheit is: %2f\n", fahrenheit);
    return 0;
}