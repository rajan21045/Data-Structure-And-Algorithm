//find the largest of two number
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter Two Number: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        printf("First Number(%d) Is Greater Than Second Number(%d)", num1, num2);
    }else
        printf("Second Number(%d) Is Greater Than First Number(%d)", num2, num1);
}