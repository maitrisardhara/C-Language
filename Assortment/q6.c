#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[10][10];
    int size, i, j;
    int sum = 0;

    printf("Enter the size of the square matrix : ", matrix[10][10]);
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}


