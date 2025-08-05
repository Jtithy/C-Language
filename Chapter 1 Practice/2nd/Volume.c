/*Calculate the area of circle:
-using user input
Calculate the volume of Cylinder given it's radius & height */
#include<stdio.h>

int main()
{
    float radius, area;
    float radius2, height, volume;
    printf("Input the radius of Circle: \n");
    scanf("%f", &radius);
    area= 3.1416*radius*radius;
    printf("Input the radius & height of Cylinder: \n");
    scanf("%f %f", &radius2, &height);
    volume= 3.1416*radius2*radius2*height;
    printf("The area is: %2f\n", area);
    printf("The volume is: %2f\n", volume);
    return 0;
}