//Print a pascal triangle using c using this formula; triangle[line][j] = triangle[line - 1][j - 1] + triangle[line - 1][j]
#include <stdio.h>
#include <stdlib.h>

void Pascal(int n) {
    int triangle[n][n];

    // Generate Pascal's Triangle
    for (int line = 0; line < n; line++) {
        // End values of a line are always 1
        triangle[line][0] = 1;
        triangle[line][line] = 1;

        // Calculate other values in the line
        for (int j = 1; j < line; j++) {
            triangle[line][j] = triangle[line - 1][j - 1] + triangle[line - 1][j];
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        // Print values in the current line
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    Pascal(n);
    return 0;
}