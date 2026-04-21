//Check Divisibility by 5 and 11
#include<stdio.h>
int main(){
    int num1;
    printf("Enter A Number: ");
    scanf("%d", &num1);

    if(num1%5 ==0 && num1%11 ==0 )
        printf("The Number is Divisibility by 5 and 11.");
    else
        printf("The Number is not Divisibility by 5 and 11.");

}