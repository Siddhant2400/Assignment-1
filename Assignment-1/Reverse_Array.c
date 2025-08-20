#include <stdio.h>

int main() 
{
    int arr[100],n,i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i=0; i<n/2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
    printf("Reversed array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}