/*Create an array of complex numbers and display them with the help 
of a display function. The values must be taken from users. */
 #include<stdio.h>

typedef struct complex
{
    float r;
    float i;
} C;

void display(C c)
{
    printf("The value of complex: %f + i%f\n", c.r, c.i);
}

int main()

{
    struct complex c[5];
    int i;
    for(i = 0; i < 5; i++)
    {
    printf("Enter the values of real part:\n");
    scanf("%f", &c[i].r);
    printf("Enter the values of imaginary part:\n");
    scanf("%f", &c[i].i);
    display(c[i]);
    }

    return 0;
}