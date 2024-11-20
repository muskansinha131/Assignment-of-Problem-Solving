// Write a program to print number in reverse order with a difference of  2.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Reverse number : %d",num);
    while (num>0)
    {
        num -= 2;
        printf(" %d",num);
    }
    return 0;
}

