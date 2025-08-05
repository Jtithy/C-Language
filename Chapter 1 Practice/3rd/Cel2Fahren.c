/*Convert Celcius to Fahrenheit*/
#include<stdio.h>

int main()

{
    float celcius, fahrenheit;
    printf("Input the Celcius: \n");
    scanf("%f", &celcius);
    fahrenheit = (9.0/5.0)*celcius + 32;
    printf("The Fahrenheit is: %2f\n", fahrenheit); 
    return 0;
}