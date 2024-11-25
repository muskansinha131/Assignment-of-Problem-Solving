

// Call by Reference :

#include <stdio.h>

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap_by_reference(&a, &b);
    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}


