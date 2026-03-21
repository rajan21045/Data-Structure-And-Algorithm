/*
Selection Sort
The Selection Sort algorithm finds the lowest value in an array and moves it to the front of the array.

The algorithm looks through the array again and again, moving the next lowest values to the front, until the array is sorted.

How it works:
    1. Go through the array to find the lowest value.
    2. Move the lowest value to the front of the unsorted part of the array.
    3. Go through the array again as many times as there are values in the array.

Selection Sort Implementation
To implement the Selection Sort algorithm in a programming language, we need:
    1. An array with values to sort.
    2. An inner loop that goes through the array, finds the lowest value, and moves it to the front of the array. This loop must loop through one less value each time it runs.
    3. An outer loop that controls how many times the inner loop must run. For an array with n values, this outer loop must run n − 1 times.

The resulting code looks like this:
*/
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter The Size of The Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter The Element: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Selection Sort
    int a, b, temp;
    for(a=0; a<n-1; a++){
        int minIdx = a;
        for(b=a+1; b<n; b++){
            if(arr[b]< arr[minIdx]){
                minIdx = b;
            }
        }

        // Swap
        temp = arr[a];
        arr[a] = arr[minIdx];
        arr[minIdx] = temp;
    }

    printf("Sorted array:\n");
    for (int c = 0; c < n; c++)
    {
        printf("%d ", arr[c]);
    }

    return 0;
}