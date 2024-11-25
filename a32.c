// Write a C program to find maximum and minimum between two numbers using functions. 

#include<stdio.h>
int max(int a,int b){
    if(a>=b)
    return a;
    return b;
}
int min(int a,int b){
    if(a<=b)
    return a;
    return b;
}
int main()
{
    int a,b;
    printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
    printf("The maximum number is : %d \n", max(a,b));
    printf("The minimum number is : %d ", min(a,b));
    return 0;
}