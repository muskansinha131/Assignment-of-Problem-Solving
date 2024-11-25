// Write a program to copy one array to another using pointer.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int source[n], destination[n];
    for (int i = 0; i < n; i++) {
    printf("Enter the array elements : ");
        scanf("%d", &source[i]);
    }

    for (int i = 0; i < n; i++) {
        *(destination + i) = *(source + i);
    }

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}

