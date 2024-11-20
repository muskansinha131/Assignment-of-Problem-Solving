// Write a program to input two numbers and display the maximum number. 

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is maximum number", a);
    }
    else if(a == b)
    {
        printf("a and b both are equal numbers : %d ", a);
    }
    else
    {
        printf("%d is maximum number ",b);
    }

    return 0;
}