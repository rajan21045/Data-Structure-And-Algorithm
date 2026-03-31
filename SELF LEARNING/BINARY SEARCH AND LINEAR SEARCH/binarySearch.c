#include <stdio.h>
int binarySearch(int myArray[], int size, int targetedValue);
int main()
{
    int myArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int targetedValue = 15;

    int result = binarySearch(myArray, size, targetedValue);
    if (result != -1)
    {
        printf("Value %d Found At %d Index.", targetedValue, result);
    }
    else
    {
        printf("Sorry, The Value %d Not Found.", targetedValue);
    }
    return 0;
}

int binarySearch(int myArray[], int size, int targetedValue)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int midValue = (left + right) / 2;
        if (myArray[midValue] == targetedValue)
        {
            return midValue;
        }
        if (myArray[midValue] < targetedValue)
        {
            left = midValue + 1;
        }
        else
        {
            right = midValue - 1;
        }
    }
    return -1;
}
