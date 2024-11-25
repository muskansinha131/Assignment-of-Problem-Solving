// Write a program to input and print array elements using pointer.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
    printf("Enter elements of the array: ");
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
