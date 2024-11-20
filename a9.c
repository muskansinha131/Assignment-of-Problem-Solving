// Write a program to count number of digits in a given integer.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Integer :");
    scanf("%d",&n);
    int count=0,r;
    while (n>0)
    {
        n = n/10;
        count++;
    }
    printf("%d",count);
    
}