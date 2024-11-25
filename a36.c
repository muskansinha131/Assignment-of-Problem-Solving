//  Write a program to find the sum of all the elements of an array using pointers. 

#include <stdio.h>

int sum_of_array(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
    printf("Enter elements of the array: ");
        scanf("%d", &arr[i]);
    }
    printf("Sum of elements: %d\n", sum_of_array(arr, n));
    return 0;
}

