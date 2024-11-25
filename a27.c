// Write a program to calculate sum of first 20 natural numbers using recursive function.
#include <stdio.h>

int sum_of_natural_numbers(int n) {
    if (n == 1)
        return 1;
    return n + sum_of_natural_numbers(n - 1);
}

int main() {
    printf("Sum of first 20 natural numbers: %d\n", sum_of_natural_numbers(20));
    return 0;
}
