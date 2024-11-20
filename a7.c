// Write a program to find the roots of quadratic equation.
// Quadratic equation = ax^2+bx+c;
// Shreedhar Acharya formula = ((-b +-(root b^2-4ac)/2a)
// if b2-4ac >= 0 then 2 values will arrive
// otherwise an imaginary value will arrive


#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c ;
    printf("Enter the value of a , b , c : ");
    scanf("%d %d %d",&a, &b ,&c);
    float k = (b*b)-(4*a*c) ;
    printf("k= %.2f\n",k);
if(k>= 0)
{
    float root_1 =(float)(-b+(sqrt(k)))/(2*a);
    float root_2 =(float)(-b-(sqrt(k)))/(2*a);
    printf("Roots are : %.2f , %.2f ", root_1 , root_2);
}
else{
   float imaginary_part = sqrt(-k);  // Take sqrt of positive part of discriminant

        // Print imaginary roots
        printf("Roots are: %.2f + %.2fi / %d\n", -b / (2.0 * a), imaginary_part, 2 * a);
        printf("Roots are: %.2f - %.2fi / %d\n", -b / (2.0 * a), imaginary_part, 2 * a);
}

}