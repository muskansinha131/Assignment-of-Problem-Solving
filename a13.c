// Write a program to check whether a number is Palindrome or not. (eg:121)

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int pal = num ;
    int k = 0;
    while (num>0)
    {
        int r = num%10;
        num /= 10;
        k = k * 10 + r;
    }
    if(pal == k){
        printf("%d is a Palindrome number .",k);
    }
    else
    printf("%d is not a Palindrome number .",pal);
    
}