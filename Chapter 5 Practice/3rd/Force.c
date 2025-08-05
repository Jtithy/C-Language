//Write a program to calculate force of attraction on a mass exerted by earth. g= 9.8m/s^2.
#include <stdio.h>

float calculate_force(float mass) {
    float g = 9.8;
    return mass * g;
}

int main() {
    float mass, force;
    printf("Enter the mass in kilograms: ");
    scanf("%f", &mass);
    force = calculate_force(mass);
    printf("The force of attraction is %.2f Newtons\n", force);
    return 0;
}
