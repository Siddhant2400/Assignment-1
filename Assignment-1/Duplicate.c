#include <stdio.h>

int main() 
{
    int a[100], n, temp[100], k = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int duplicate = 0;
        for(int j = 0; j < k; j++) {
            if(a[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            temp[k++] = a[i];
        }
    }
    
    printf("Array after removing duplicates: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    
    return 0;
}