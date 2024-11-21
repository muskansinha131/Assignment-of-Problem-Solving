// Write a Program to reverse the array elements in C Programming.

#include<stdio.h>

void reverse(int a[], int n )
{
    int first=0,last= n-1;
    for(int i =0 ; i < n ; i++)
    {
        if(first < last)
        {
            int temp = a[first] ;
            a[first] = a[last] ;
            a[last] = temp ;
            first++ ;
            last-- ;
        }
    }
}
int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array element :");
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    printf("-- After reverse the array --\n");
    for (int i = 0 ; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    
    
}