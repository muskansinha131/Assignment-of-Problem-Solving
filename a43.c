// Write a program to search an element in array using pointers. 

#include <stdio.h>

int search_element(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target)
            return i; // Return the index if found
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int index = search_element(arr, n, target);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
