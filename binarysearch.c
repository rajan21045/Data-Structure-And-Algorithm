#include <stdio.h>

int binarysearch(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1; // Item not found
    }

    int mid = (left + right) / 2;

    if (arr[mid] == key) {
        return mid; // Item found at index mid
    } else if (arr[mid] > key) {
        return binarysearch(arr, left, mid - 1, key); // Search in the left half
    } else {
        return binarysearch(arr, mid + 1, right, key); // Search in the right half
    }
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // VLA (Variable Length Array)

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarysearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
