/*Write a program to determine whether a student has passed or failed. To pass a student
requires of 40% and at least 33% in each subject. Assume there are three subjects and take
the marks input form the uses.*/
#include<stdio.h>

int main()

{
    int sub1, sub2, sub3;
    float total, percentage;
    printf("Enter the marks of subject 1: ");
    scanf("%d", &sub1);
    printf("Enter the marks of subject 2: ");
    scanf("%d", &sub2);
    printf("Enter the marks of subject 3: ");
    printf("Enter the marks of subject 3: ");
    scanf("%d", &sub3);
    total = sub1 + sub2 + sub3;
    percentage = (total / 300) * 100;
    if(percentage >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33){
        printf("You have passed the exam with %.2f%%\n", percentage);
    }
    else{
        printf("You have failed the exam with %.2f%%\n", percentage);
    }
    return 0;
}