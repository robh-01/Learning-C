#include <stdio.h>

// Function to check if two matrices are identical
int areIdentical(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0; // Matrices are not identical
            }
        }
    }
    return 1; // Matrices are identical
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if matrices are identical
    if (areIdentical(rows, cols, mat1, mat2)) {
        printf("The matrices are identical.\n");
    } else {
        printf("The matrices are not identical.\n");
    }

    return 0;
}
