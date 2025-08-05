//Write a structer capable of storing date. Write a function to compare those dates.
#include<stdio.h>

struct Date
{
    int mm;
    int dd;
    int yyy;
};

int compare(struct Date d1, struct Date d2)
{
    if((d1.yyy == d2.yyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0; 
    }
    else if(d1.yyy > d2.yyy)
    {
        return 1; 
    }
    else if(d1.mm > d2.mm)
    {
        return 1; 
    }
    else if(d1.dd > d2.dd)
    {
        return 1; 
    }
    else{
        return -1; 
    }

}
int main()
{
    struct Date d1 = {1, 2, 2024};
    struct Date d2 = {1, 3, 2024};
    printf("Compare dates: %d\n", compare(d1, d2));
    return 0;
}