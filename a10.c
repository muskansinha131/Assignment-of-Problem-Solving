// Write a program to reverse a given integer.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int r , k = 0;
    while (num>0)
    {
        r = num%10;
        num /=10 ;
        k = k*10+r; 
    }
    printf("%d",k);
    return 0;
}