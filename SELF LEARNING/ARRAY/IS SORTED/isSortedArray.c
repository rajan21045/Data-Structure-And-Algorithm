#include<stdio.h>
#include <stdbool.h>
/*
Iterative approach - O(n) Time and O(1) Space
    We traverse from the second element. For every element we check if it is smaller than or equal to previous element or not. At any point if we find previous element greater, we return false. 

For example: arr[] = [10, 20, 30, 5, 6]
i = 1 : (10 <= 20), continue
i = 2 : (20 <= 30), continue
i = 3 : (30 > 5), return false.
*/
bool isSorted(int arr[], int size){
    for(int i=1; i<size; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
/*
Output
true
*/

/*
Recursive approach - O(n) Time and O(n) Space
The idea is to check if the last two elements are in order, then recursively check the rest of the array. The base case is when the array has zero or one element, which is always considered sorted.

Step-By-Step Approach:  

If size of array is zero or one, return true.
Check last two elements of array, if they are sorted, perform a recursive call with n-1 else, return false.
*/

// Helper function that takes array and size, used for recursion
bool isSortedHelper(int arr[], int n) {
    if (n == 0 || n == 1)
        return true;
    return arr[n - 1] >= arr[n - 2] && isSortedHelper(arr, n - 1);
}

// Main function to check if array is sorted, only takes array as input
bool isSortedd(int arr[], int size) {
    return isSortedHelper(arr, size);
}

int main(){
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr, size)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
    printf("\n");
    printf("%s\n", isSortedd(arr, size) ? "true" : "false");
    return 0;
}
