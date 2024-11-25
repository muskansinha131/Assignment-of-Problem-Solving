// Write a program to add, subtract, multiply and divide two integers using userdefined type function with return type. 

#include<stdio.h>
int add(int a,int b){
    return(a+b);
}
int sub(int a,int b){
    return(a-b);
}
int mul(int a,int b){
    return(a*b);
}
int div(int a,int b){
    return(a/b);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d", &a , &b);

    printf("Addition of a and b :       %d\n", add(a,b));
    printf("Substraction of a and b :   %d\n", sub(a,b));
    printf("Multiplication of a and b : %d\n", mul(a,b));
    printf("Division of a and b :       %d\n", div(a,b));

    return 0;
}