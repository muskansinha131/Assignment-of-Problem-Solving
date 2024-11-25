// Write a program to multiply two 2 X 2 matrix using pointers. 

#include <stdio.h>

void multiply_matrices(int *a, int *b, int *result, int size) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(result + i * 2 + j) = 0;
            for (int k = 0; k < 2; k++) {
                *(result + i * 2 + j) += (*(a + i * 2 + k)) * (*(b + k * 2 + j));
            }
        }
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

    multiply_matrices((int *)a, (int *)b, (int *)result, 4);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

