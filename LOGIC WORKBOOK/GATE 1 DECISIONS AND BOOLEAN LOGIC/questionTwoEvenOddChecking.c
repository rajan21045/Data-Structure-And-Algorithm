//Determine if an integer is even or odd
#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number To Determine Even Or Odd: ");
    scanf("%d", &n);

    if(n%2==0){
        printf("Your Entered Number(%d) Is Even.", n);
    }else{
        printf("Your Entered Number(%d) Is Odd.", n);
    }
    
    return 0;
}