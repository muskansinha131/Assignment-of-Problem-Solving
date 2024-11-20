// Write a Program to find the largest and smallest element in Array. 

#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n];
    for(int i =0 ;i < n ; i++)
    {
        printf("Enter the a[%d] :", i);
        scanf("%d",&a[i]);
    }

    int large = a[0];
     for(int i = 1 ; i < n ; i++)
    {
        if(a[i]>=large)
        {
            large = a[i];
        }
    }
printf("\n The largest value = %d" , large);
  
  int small = a[0];
  for(int i = 1 ; i < n ; i++)
    {
        if(a[i]<=small)
        {
            small = a[i];
        }
    }
printf("\n The largest value = %d" , small);
}