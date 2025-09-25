#include <stdio.h>
#include <stdbool.h> // for using bool type (true/false)

// Bubble Sort Function
// This function sorts the array in ascending order using Bubble Sort
void bubbleSortCode(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        bool isSwap = false;  // flag to check if any swap happens
        for (j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwap = true;
            }
        }
        // If no swap happened, array is already sorted ? stop loop
        if (!isSwap) {
            break;
        }
    }
}

// Function to print the sorted array
void printingBubbleSortedArray(int arr[], int n) {
    int i;
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[20], i, n;

    // Introduction message
    printf("..................Welcome To Bubble Sort Program..................\n");

    // Input: size of the array
    printf("Enter The Size Of The Array: ");
    scanf("%d", &n);

    // Input: elements of the array
    printf("Enter The Elements In The Array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting function call
    bubbleSortCode(arr, n);

    // Printing sorted array
    printingBubbleSortedArray(arr, n);

    return 0; // successful program termination
}

