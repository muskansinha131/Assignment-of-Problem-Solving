// Write a program to generate Fibonacci series

#include<stdio.h>
int main()
{
    int num,fnum = 0, snum = 1;
    printf("Enter the number :");
    scanf("%d",&num);
    printf ("Fibonacci series = %d %d",fnum , snum);
    for(int i = 1; i <= num ; i++)
    {
        int tnum = fnum + snum;
        fnum = snum ;
        snum = tnum ;
        printf(" %d",tnum);
    }
}