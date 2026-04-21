// Find the largest of three numbers.
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter Three Number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("First Number(%d) Is Greater Than Second Number(%d) And Third Number(%d)", num1, num2, num3);
    }else if(num2 > num1 && num2 > num3){
        printf("Second Number(%d) Is Greater Than First Number(%d) And Third Number(%d)", num2, num1, num3);
    }else
        printf("Third Number(%d) Is Greater Than First Number(%d) And Second Number(%d)", num3, num1, num2);
}