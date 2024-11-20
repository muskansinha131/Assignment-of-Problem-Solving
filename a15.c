// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number. 

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int k = num %10 ;
    int r;
    while (num>0)
    {
        r = num%10;
        num /= 10;
    }
    printf("Sum of first and last digit = %d ", (k+r));
    return 0;
}