#include <stdio.h>

int main() {
    int a[10][10];
    int r, c;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nRow sums:\n");
    for(int i = 0; i < r; i++) {
        int rowSum = 0;
        for(int j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d sum: %d\n", i+1, rowSum);
    }
    
    printf("\nColumn sums:\n");
    for(int j = 0; j < c; j++) {
        int colSum = 0;
        for(int i = 0; i < r; i++) {
            colSum += a[i][j];
        }
        printf("Column %d sum: %d\n", j+1, colSum);
    }
    
    return 0;
}