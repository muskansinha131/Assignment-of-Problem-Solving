// Write a program for addition of two matrices of any order in C. 

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the length of the matrix : ");
    scanf("%d",&n);
    int a[20][20],b[20][20];
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {
        printf("Enter the 1st matrix elements : ");
         scanf("%d",&a[i][j]);
    }
    }
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {
        printf("Enter the 2nd matrix elements : ");
         scanf("%d",&b[i][j]);
    }
    }
    int c[40][40];
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {

        c[i][j] = a[i][j] + b[i][j] ;
    }
    }

    printf("   : 1st Matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d",a[i][j]);
        }
         printf("\n");
    }
    
    printf("   : 2nd Matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d",b[i][j]);
        }
         printf("\n");
    }

    printf("    : Sum of the matix :  \n ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    
    
    return 0; 
}