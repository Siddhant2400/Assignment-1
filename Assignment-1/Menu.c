#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size) {
    if(size == 0) {
        printf("Array is empty\n");
        return;
    }
    printf("Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *size) {
    int pos, val;
    printf("Enter position (0 to %d): ", *size);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);
    
    for(int i = *size; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    (*size)++;
}

void delete(int arr[], int *size) {
    int pos;
    printf("Enter position to delete (0 to %d): ", *size-1);
    scanf("%d", &pos);
    
    for(int i = pos; i < *size-1; i++) {
        arr[i] = arr[i+1];
    }
    (*size)--;
}

void linearSearch(int arr[], int size) {
    int val, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &val);
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == val) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Not found\n");
    }
}

int main() {
    int arr[100], n;
    int choice;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    while(1) {
        printf("\n1.DISPLAY\n2.INSERT\n3.DELETE\n4.LINEAR SEARCH\n5.EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: display(arr, n); break;
            case 2: insert(arr, &n); break;
            case 3: delete(arr, &n); break;
            case 4: linearSearch(arr, n); break;
            case 5: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}