/*
How it works:
    1. Go through the array value by value from the start.
    2. Compare each value to check if it is equal to the value we are looking for.
    3. If the value is found, return the index of that value.
    4. If the end of the array is reached and the value is not found, return -1 to indicate that the value was not found.


Manual Run Through: What Happened?
    This algorithm is really straight forward.
    Every value is checked from the start of the array to see if the value is equal to 11, the value we are trying to find.
    When the value is found, the searching is stopped, and the index where the value is found is returned.
    If the array is searched through without finding the value, -1 is returned.


Linear Search Implementation
    To implement the Linear Search algorithm we need:
    1. An array with values to search through.
    2. A target value to search for.
    3. A loop that goes through the array from start to end.
    4. An if-statement that compares the current value with the target value, and returns the current index if the target value is found.
    5. After the loop, return -1, because at this point we know the target value has not been found.

The resulting code for Linear Search looks like this:
*/
#include<stdio.h>
int linearSearch(int arr[], int size, int targetValue);
int main(){

    int arr[] = {12, 34, 31, 14, 90, 22};
    int size = sizeof(arr)/sizeof(arr[0]);
    int targetValue = 90;

    int indexValue = linearSearch(arr, size, targetValue);

    if(indexValue != -1){
        printf("Value %d Is Found At %d Index", targetValue, indexValue);
    }else{
        printf("Oops; Your Targeted Value \'%d\' Is Not Found", targetValue);
    }

    return 0;
}

int linearSearch(int arr[], int size, int targetValue ){
        int i;
        for(i=0; i<size; i++){
            if(arr[i] == targetValue){
                return i;
            }
        }
        return -1;
}

/*
Linear Search Time Complexity
    For a general explanation of what time complexity is, visit this page.
    For a more thorough and detailed explanation of Insertion Sort time complexity, visit this page.
    If Linear Search runs and finds the target value as the first array value in an array with n values, only one compare is needed.
    But if Linear Search runs through the whole array of n values, without finding the target value, n compares are needed.
    This means that time complexity for Linear Search is
                        O(n)
    
*/