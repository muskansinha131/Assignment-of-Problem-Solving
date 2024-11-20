// Write a program to input name, marks of 5 subjects of a student and display the name of the student, the total marks scored, percentage scored and the class of result. 
#include<stdio.h>
int main()
{
    char a[50] ;
    int sub1,sub2,sub3,sub4,sub5 ;
    printf("Enter the name of the student : ");
    gets(a);

    printf("Enter the number of first subject :");
    scanf("%d",&sub1);
    printf("Enter the number of second subject :");
    scanf("%d",&sub2);
    printf("Enter the number of third subject :");
    scanf("%d",&sub3);
    printf("Enter the number of fourth subject :");
    scanf("%d",&sub4);
    printf("Enter the number of fifth subject :");
    scanf("%d",&sub5);

    printf("Name of the student : %s" ,a);
    int sum = sub1+sub2+sub3+sub4+sub5;
    float per =(float) sum/5 ;
    printf("\nTotal marks : %d\n", sum);
    printf("Percentage : %.2f\n", per);
    if(per>=60)
    {
        printf("\033[32mFirst Division");
    }
    else if (per>=50)
    {
        printf("\033[33mSecond Division");
    }
    else if (per>=35)
    {
        printf("\033[33mThird Division");
    }
    else{
        printf("\033[31mFail");
    }
    
    

}