/* Write a C program to implement a linear queue with insert, delete, and display operations. */

#include <stdio.h>
#include <stdlib.h>
#define maxsize 5
void enqueue();
void dequeue();
void display();
int front = -1, rear = -1;
int queue[maxsize];
int main()
{
    int choice;
    while (choice != 4)
    {
        printf("\n Linear Queue Operations \n");
        printf("\n1.Insert the element \n2.Delete the element \n3.Display the queue \n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n invalid choice!!\n");
        }
    }
    return 0;
}
void enqueue()
{
    int item;
    printf("\n Enter the element to be inserted: ");
    scanf("%d", &item);
    if (rear == maxsize - 1)
    {
        printf("\n Queue is full!!\n");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = item;
    printf("\n Element inserted successfully!!\n");
}
void dequeue()
{
    int item;
    if (front == -1|| front > rear)
    {
        printf("\n Underflow \n");
        return;
    }
    else{
        item =queue[front];
        if(front==rear)
        {
            front=-1;
            rear =-1;
        }
        else{
            front=front+1;
        }
        printf("\n Value deleted %d", item);
    }
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("\n Empty Queue \n");
    }
    else{
        printf("\n Elements in the queue are: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    }