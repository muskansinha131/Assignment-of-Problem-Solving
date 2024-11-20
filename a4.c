// Write a program to illustrate the use of unary prefix and postfix increment and decrement operators

#include<stdio.h>
int main()
{
    int a = 5 ;
    printf("Prefix increment = %d\n " , ++a); //firstly it will increment and provide the value =6
    printf("postfix increment = %d\n ", a++);//it will provide the value 6 and the become 7
    printf("Prefix decrement = %d\n " , --a);//it decrement first and return the value 6
    printf("postfix decrement = %d\n ", a--);//it return the value 6 first the decrement to 5
    printf("Final value of a = %d\n" , a);//That's why the final value of a is 5

    return 0 ;
}