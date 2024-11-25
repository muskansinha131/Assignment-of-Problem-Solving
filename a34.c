// Write a C program to check whether a number is prime, Armstrong or perfect number using functions. 

#include <stdio.h>
#include <math.h>

// Function to check Prime
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to check Armstrong
int is_armstrong(int n) {
    int sum = 0, original = n, digits = 0;
    while (original != 0) {
        digits++;
        original /= 10;
    }
    original = n;
    while (original != 0) {
        sum += pow(original % 10, digits);
        original /= 10;
    }
    return (sum == n);
}

// Function to check Perfect
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return (sum == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d is %s\n", num, is_prime(num) ? "Prime" : "Not Prime");
    printf("%d is %s\n", num, is_armstrong(num) ? "Armstrong" : "Not Armstrong");
    printf("%d is %s\n", num, is_perfect(num) ? "Perfect" : "Not Perfect");

    return 0;
}