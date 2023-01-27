#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &m1, &n1);
    printf("Enter the elements of first matrix: \n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &m2, &n2);
    printf("Enter the elements of second matrix: \n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (n1 != m2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result of matrix multiplication: \n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

