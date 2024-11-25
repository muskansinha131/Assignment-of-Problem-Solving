// Write a program to add two numbers using pointers. 

#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    sum = *p1 + *p2;
    printf("Sum of %d and %d is %d\n", *p1, *p2, sum);

    return 0;
}
