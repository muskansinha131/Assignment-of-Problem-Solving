// Write a Program to multiply two 3 X 3 Matrices.


#include<stdio.h>
int main()
{
    // int n ;
    // printf("Enter the length of the matrix : ");
    // scanf("%d",&n);
    int a[3][3],b[3][3];
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("Enter the 1st matrix elements : ");
         scanf("%d",&a[i][j]);
    }
    }
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("Enter the 2nd matrix elements : ");
         scanf("%d",&b[i][j]);
    }
    }
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        c[i][j]= 0 ;
        for (int k = 0; k < 3; k++)
        {
        c[i][j] =  c[i][j] + (a[i][k] * b[k][j] );
        }
        
    }
    }

    printf("   : 1st Matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",a[i][j]);
        }
         printf("\n");
    }
    
    printf("   : 2nd Matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",b[i][j]);
        }
         printf("\n");
    }

    printf("    : Sum of the matix :  \n ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    
    
    return 0; 
}