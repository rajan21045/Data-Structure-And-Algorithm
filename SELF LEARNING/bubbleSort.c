/*
Bubble Sort
Bubble Sort is an algorithm that sorts an array from the lowest value to the highest value.

The word 'Bubble' comes from how this algorithm works, it makes the highest values 'bubble up'.

How it works:
    1. Go through the array, one value at a time.
    2. For each value, compare the value with the next value.
    3. If the value is higher than the next one, swap the values so that the highest value comes last.
    4. Go through the array as many times as there are values in the array.

Complexity
    Worst Case: O(n²)
    Average Case: O(n²)
    Best Case (optimized): O(n)

Bubble Sort Implementation
To implement the Bubble Sort algorithm in a programming language, we need:
    1. An array with values to sort.
    2. An inner loop that goes through the array and swaps values if the first value is higher than the next value. This loop must loop through one less value each time it runs.
    3. An outer loop that controls how many times the inner loop must run. For an array with n values, this outer loop must run n-1 times.
    
The resulting code looks like this:
*/
#include <stdio.h>
int main()
{

    int n;
    printf("Enter The Size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter The Element: ");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k, j, l, temp;
    for (k = 0; k < n - 1; k++)
    {
        for (j = 0; j < n - k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The Sorted Array Using Bubble Sort: \n");
    for (l = 0; l < n; l++)
    {
        printf("%d \t", arr[l]);
    }

    return 0;
}