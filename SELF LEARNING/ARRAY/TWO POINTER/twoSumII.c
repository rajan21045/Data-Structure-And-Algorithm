#include<stdio.h>
int main(){
    int arr[] = {2,7,11,15};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 9;
    int left = 0;
    int right = size-1;

    while ((left<right))
    {
        /* code */
        int current_sum = arr[left]+arr[right];
        if(current_sum == target){
            printf("%d\t%d\t", left, right);
        }

        if(current_sum < target){
            left++;
        }else{
            right--;
        }
    }
    
    return 0;
}