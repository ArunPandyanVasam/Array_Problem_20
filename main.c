#include <stdio.h>
#define SIZE 100

int main(void) {
    //  20. Write a program in C for the subtraction of two matrices.
    int n, arr1[SIZE][SIZE], arr2[SIZE][SIZE], arr3[SIZE][SIZE];

    printf("\nInput the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    printf("\nInput elements in the first matrix: ");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("\nElement - [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nInput elements in the second matrix: ");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("\nElement - [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The First matrix is: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("The Second matrix is: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }


    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("\nThe Subtraction of two matrix is: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
