// Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers.
#include <stdio.h>

// Function to calculate GCD using Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the relationship: LCM(a, b) * GCD(a, b) = |a * b|
int findLCM(int a, int b, int gcd) {
    return (a * b) / gcd;
}

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    gcd = findGCD(num1, num2);

    // Calculate LCM
    lcm = findLCM(num1, num2, gcd);

    // Display results
    printf("GCD (HCF) of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
