//Create a two-dimentional vector using structures.
#include<stdio.h>

struct vector
{
    int i;
    int j;
};

int main()

{
    struct vector v= {1, 2};
    printf("The value of vector: %di + %dj\n", v.i, v.j);
    return 0;
}