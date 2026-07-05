#include <stdio.h>

#define SIZE 5

void mergeSort(int arr[], int strt, int end);
void merge(int arr[], int strt, int mid, int end);

int main() {
    int arr[SIZE];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, SIZE - 1);

    printf("\nSorted Array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void mergeSort(int arr[], int strt, int end) {
    if (strt < end) {
        int mid = strt + (end - strt) / 2;

        // Sort left half
        mergeSort(arr, strt, mid);

        // Sort right half
        mergeSort(arr, mid + 1, end);

        // Merge both halves
        merge(arr, strt, mid, end);
    }
}

void merge(int arr[], int strt, int mid, int end) {
    int temp[end - strt + 1];   // Temporary array
    int i = strt;               // Left subarray
    int j = mid + 1;            // Right subarray
    int k = 0;                  // Temp array index

    // Merge the two sorted halves
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements of left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of right half
    while (j <= end) {
        temp[k++] = arr[j++];
    }

    // Copy merged elements back into original array
    for (i = strt, k = 0; i <= end; i++, k++) {
        arr[i] = temp[k];
    }
}