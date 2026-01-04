#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // --- 1D ARRAY (Static) ---
    int arr1D[5] = {1, 2, 3, 4, 5};
    printf("Static 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr1D[%d] = %d\n", i, arr1D[i]);
    }

    // --- 1D ARRAY (Dynamic) ---
    int n = 5;
    int *dyn1D = (int *) malloc(n * sizeof(int));
    if (dyn1D == NULL) {
        perror("malloc failed");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        dyn1D[i] = (i + 1) * 10;
    }

    printf("\nDynamic 1D array:\n");
    for (int i = 0; i < n; i++) {
        printf("dyn1D[%d] = %d\n", i, dyn1D[i]);
    }

    free(dyn1D);

    // --- 2D ARRAY (Static) ---
    int mat2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\nStatic 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat2D[%d][%d] = %d  ", i, j, mat2D[i][j]);
        }
        printf("\n");
    }

    // --- 2D ARRAY (Dynamic using array of pointers) ---
    int rows = 2, cols = 3;
    int **dyn2D = (int **) malloc(rows * sizeof(int *));
    if (dyn2D == NULL) {
        perror("malloc failed for rows");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        dyn2D[i] = (int *) malloc(cols * sizeof(int));
        if (dyn2D[i] == NULL) {
            perror("malloc failed for row");
            // Free previously allocated rows
            for (int k = 0; k < i; k++) free(dyn2D[k]);
            free(dyn2D);
            return 1;
        }
    }

    // Fill the matrix
    int counter = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dyn2D[i][j] = counter++;
        }
    }

    printf("\nDynamic 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("dyn2D[%d][%d] = %d  ", i, j, dyn2D[i][j]);
        }
        printf("\n");
    }

    // Free each row, then the array of pointers
    for (int i = 0; i < rows; i++) {
        free(dyn2D[i]);
    }
    free(dyn2D);

    printf("\nMemory freed successfully.\n");

    return 0;
}
