//Write a program with a struct representing a complex number.
 #include<stdio.h>

typedef struct complex
{
    float r;
    float i;
} C;

int main()

{
    struct complex c = {1, 2};
    printf("The value of complex: %f + i%f\n", c.r, c.i);
    return 0;
}