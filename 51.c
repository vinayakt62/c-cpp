#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSum[MAX_ROWS] = {0};
    int colSum[MAX_COLS] = {0};
    int m, n; // m rows, n columns

    // Input the matrix size and elements
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Calculate column sums
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            colSum[j] += matrix[i][j];
        }
    }

    // Display row sums
    printf("Row sums:\n");
    for (int i = 0; i < m; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Display column sums
    printf("Column sums:\n");
    for (int j = 0; j < n; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}
