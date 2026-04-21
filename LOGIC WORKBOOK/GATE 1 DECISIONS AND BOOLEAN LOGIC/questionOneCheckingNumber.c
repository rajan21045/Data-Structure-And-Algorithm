#include<stdio.h>
int main(){
    //Fondatinal Thinking
    //1. Check if a number is a postive, negative, or zero
    int num1;
    printf("Enter A Number: ");
    scanf("%d", &num1);

    if(num1 > 0){
        printf("Your Enter Number(%d) Is Postive.", num1);
    }else if(num1 <0){
        printf("Your Enter Number(%d) Is Negative.", num1);
    }else if(num1 ==0){
        printf("Your Enter Number(%d) Is Zero.", num1);
    }

    return 0;
}