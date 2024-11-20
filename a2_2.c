// Swap without using third variable

#include<stdio.h>
int main()
{
    int a = 10 ;
    int b = 20 ;
    a = a+b ;
    b = a - b ;
    a = a - b ;
    printf("The value of a = %d \nThe value of b = %d ", a,b);
}