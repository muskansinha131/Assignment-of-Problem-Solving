//  Write a program to print the sum of digits of a number using for loop. 

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int k=0;
    for(;num>0;)
    {
        int r = num%10;
        num /= 10 ;
        k += r ;
    }
    printf("The sum of digits : %d",k);
    return 0;
}