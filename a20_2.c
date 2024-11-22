// Write a Program for deletion of an element from the specified location from Array

#include<stdio.h>

void deleteArrayElement(int a[],int n)
{
    int p ;
    printf("Enter position : ");
    scanf("%d",&p);
    p = p-1 ;
    for(int i = p ; i < n-1 ; i++)
    {
        a[i] = a[i+1];
    }
    
}
int main()
{
    int n ;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ;i < n ; i++)
    {
        printf("Enter the array element : ");
        scanf("%d",&a[i]);

    }
    deleteArrayElement(a,n);
    
    printf("\n After deleting the array \n");

    for (int i = 0; i < n-1 ; i++)
    {
        printf("%d  ", a[i]);
    }
    
}