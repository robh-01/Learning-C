// Write a program to add two matrices using array

#include <stdio.h>

// lets suppose the addition is of 2x2 matrices.
// const int n = 2;
#define N 2
int main(void)
{
    int matrix1[N][N] = {
        {1, 2},
        {3, 1},
    };

    int matrix2[N][N] = {
        {0, 9},
        {2, 1},
    };

    int addedMatrix[N][N];

    for(int i = 0; i< N; i++) {
        for(int j = 0; j < N; j++) {
            addedMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("adding:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("and:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("gives us this matrix:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", addedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}