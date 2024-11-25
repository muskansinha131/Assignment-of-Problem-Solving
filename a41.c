// Write a program to swap two arrays using pointers. 

#include <stdio.h>

void swap_arrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) {
    printf("Enter elements of the 1st array: ");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
    printf("Enter elements of the 2nd array: ");
        scanf("%d", &arr2[i]);
    }

    swap_arrays(arr1, arr2, n);

    printf("First array after swap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Second array after swap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
