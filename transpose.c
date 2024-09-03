
#include<stdio.h>


int main() {
    int n, m;
    printf("Enter the size of row and column: ");
    scanf("%d %d", &n, &m);
    
    int arr[n][m];
    printf("Enter your array:\n");
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Your transpose array is:\n");
    for(int i = 0; i < m; i++) {  // Rows and columns are swapped here for the transpose
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
