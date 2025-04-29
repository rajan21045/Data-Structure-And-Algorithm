#include <stdio.h>
int linearsearch(int arr[], int size, int item) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    // Your code goes here
    int n,key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = linearsearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}