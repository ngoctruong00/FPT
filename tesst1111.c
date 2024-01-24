#include <stdio.h>
#include <stdarg.h>

// Function to sum two matrices with fixed arguments
void SumArrFixed(int result[5][7], int arr1[5][7], int arr2[5][7]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

// Function to sum two matrices with half-fixed arguments
void SumArrHalfFixed(int result[][7], int arr1[][7], int arr2[][7], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr1[5][7] = {
		{1, 2, 3, 4, 5, 6, 7},
		{1, 2, 3, 4, 5, 6, 7},
		{1, 2, 3, 4, 5, 6, 7},
		{1, 2, 3, 4, 5, 6, 7},
		{1, 2, 3, 4, 5, 6, 7}};

    int arr2[5][7] = {
		{-1, -2, -3, -4, -5, -6, -7},
		{1, 2, 3, 4, 5, 6, 7},
		{-1, -2, -3, -4, -5, -6, -7},
		{1, 2, 3, 4, 5, 6, 7},
		{-1, -2, -3, -4, -5, -6, -7}};

    int result[5][7];

    // Method 1: Fixed arguments
    SumArrFixed(result, arr1, arr2);
    printf("Method 1 (Fixed Arguments):\n");
    printMatrix(5, 7, result);
    printf("\n");

    // Method 2: Half-fixed arguments
    SumArrHalfFixed(result, arr1, arr2, 5, 7);
    printf("Method 2 (Half-Fixed Arguments):\n");
    printMatrix(5, 7, result);
    printf("\n");

    return 0;
}
