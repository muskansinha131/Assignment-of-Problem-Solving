// Write a Program for deletion of an element from the specified location from Array

#include<stdio.h>

void deleteArrayElement(int a[],int n)
{
    int k ;
    printf("Enter the position you want to delete : ");
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
        if(i==(k-1))
        {
            a[i]=a[i+1];
            k++;
        }
    }

    // a[n-1] = NULL ;
    
    
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