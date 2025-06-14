/* Write a C program to implement a stack with push, pop, and display operations. */

#include <stdio.h>
#include <stdlib.h>

#define size 4
int Top = -1, inp_array[size];

void Push();
void Pop();
void show();

int main() {
    int choice;
    
    while (1) {
        printf("\nOPERATIONS PERFORMED BY STACK\n");
        printf("1. PUSH THE ELEMENT\n2. POP THE ELEMENT\n3. SHOW THE ELEMENT\n4. EXIT\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                printf("\nPLEASE ENTER A VALID CHOICE\n");
                
        }
    }
    
    return 0;
}

void Push() {
    int x;
    
    if (Top == size - 1) {
        
        printf("\nSTACK OVERFLOW\n");
    } 
    
    else {
        printf("\nENTER THE ELEMENT TO BE INSERTED INTO THE STACK: ");
        scanf("%d", &x);
        Top = Top + 1;
        inp_array[Top] = x;
    }
    
}

void Pop() {
    if (Top == -1) {
        
        printf("\nSTACK UNDERFLOW\n");
    } else {
        
        printf("\nPOPPED ELEMENT IS: %d\n", inp_array[Top]);
        Top = Top - 1;
    }
}

void show() {
    if (Top == -1) {
        
        printf("\nSTACK IS EMPTY\n");
    } else {
        
        printf("\nELEMENTS PRESENT IN THE STACK ARE:\n");
        int i;
        for (i = Top; i >= 0; --i) {
            printf("%d\n", inp_array[i]);
            
        }
    }
}
