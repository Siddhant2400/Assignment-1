#include <stdio.h>

int main() 
{
    int a[10][10], t[10][10];
    int r, c;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Original matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }
    
    printf("Transpose matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}