/* Program: Write a program to display the following pattern. 
       * 
       * 
       * 
       * * 
       * * * *      
*/

#include<stdio.h>
int main()
{
    int n = 5 ;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= (n-1) ; j++)
        {
            if(i== n || j == 1 )
            {
                printf("*");
            }
            else if(i == (n-1) && j == 2)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}