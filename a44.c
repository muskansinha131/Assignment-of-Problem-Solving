// Write a program to add two 2 X 2 matrix using pointers. 

#include <stdio.h>

void add_matrices(int *a, int *b, int *result, int size) {
    for (int i = 0; i < size; i++) {
        *(result + i) = *(a + i) + *(b + i);
    }
}

int main() {
    int a[2][2], b[2][2], result[2][2];

    printf("Enter elements of the first matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    add_matrices((int *)a, (int *)b, (int *)result, 4);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}