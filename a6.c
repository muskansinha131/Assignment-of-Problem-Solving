//Write a program to find the largest of three numbers using ternary operators.

#include<stdio.h>
int main()
{
    int a,b ;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    int c = ((a>b)? a : b );
    printf("The maximum number is c : %d" , c);

}