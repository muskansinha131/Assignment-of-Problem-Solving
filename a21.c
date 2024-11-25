// Write a Program to access an element in 2-D Array

#include<stdio.h>
int main()
{
    int n,m ;
    printf("Enter the length (row & coloumn ) of the array : ");
    scanf("%d%d", &n , &m);
    int a[n][n];
    for(int i = 0 ; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            printf("\n Enter the array element : ");
            scanf("%d", &a[i][j]);
        }
        
    }

    for(int i = 0 ; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
        
    }

    return 0 ;
}