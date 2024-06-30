#include <stdio.h>
#include <stdlib.h>

int a[10][10], b[10][10];
int n;

void insert(int matrix[10][10]) {
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void add() {
    printf("Enter your first matrix:\n");
    insert(a);
    printf("Enter your second matrix:\n");
    insert(b);
    printf("Resultant Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void multiply() {
    printf("Enter your first matrix:\n");
    insert(a);
    printf("Enter your second matrix:\n");
    insert(b);
    int result[10][10] = {0};
    printf("Resultant Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transpose() {
    printf("Enter your matrix:\n");
    insert(a);
    printf("Transpose Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1. For Add");
        printf("\n2. For Multiply");
        printf("\n3. For Transpose");
        printf("\n4. For Exit");
        printf("\nEnter your choice here: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                add();
                break;
            case 2:
                multiply();
                break;
            case 3:
                transpose();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
