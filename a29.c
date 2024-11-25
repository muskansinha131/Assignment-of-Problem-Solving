// Write a program to swap two integers using call by value and call by reference methods of passing arguments to a function.

// Call by Value :

#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After Swap (inside function): a = %d, b = %d\n", a, b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap_by_value(a, b);
    printf("After Swap (main): a = %d, b = %d\n", a, b);

    return 0;
}
