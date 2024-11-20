// Write a program to swap values of two variables with and without using third variable. 
// Swap using third variable
#include<stdio.h>
int main()
{
    int a = 20 ;
    int b = 30 ;

    int temp = a ;
    a = b;
    b = temp ;
    printf("The value of a = %d " , a);
    printf("\nThe value of b = %d" , b);

    return 0 ;
}