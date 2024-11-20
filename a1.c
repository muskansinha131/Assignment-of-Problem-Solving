// Write a program to calculate simple and compound interest.

// Formula of simple interest = P*R*T/100
// Formula of Compound interest = (P(1+R/100)^T)-P


#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T;
    printf("Enter the Principal time = ");
    scanf("%f",&P);
    printf("\n Enter the Rate of Interest = ");
    scanf("%f",&R);
    printf("\n Enter the Time = ");
    scanf("%f",&T);
    // Simple Interest 
    float simpleInterest = (P*R*T)/100 ;

    // Compound Interest
    float k = (1+R/100) ;
    k = pow(k,T);
    float compoundInterest = (P*k)-P;

    printf("The Simple Interest = %.2f ", simpleInterest);
    printf("The Compound Interest = %.2f" , compoundInterest);

    return 0 ;
}