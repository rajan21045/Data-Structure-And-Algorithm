/* Write a C program to solve the Tower of Hanoi problem using 
recursion. */

#include<stdlib.h>
#include <stdio.h>

void hanoi(int , char , char , char );
int main() {
    
    // Your code goes here
    hanoi(3,'A','B','C');
    return 0;
}

void hanoi(int n, char rodFrom, char rodMiddle, char rodTo) 

{
    if (n == 1) {
        
        printf("Move disk 1 from rod %c to rod %c \n", rodFrom, rodTo);
        return;
        
        }

            hanoi(n-1, rodFrom, rodTo, rodMiddle);
            printf("Move disk %d from rod %c to rod %c\n", n, rodFrom,rodTo);
            hanoi(n-1, rodMiddle, rodFrom, rodTo);
}