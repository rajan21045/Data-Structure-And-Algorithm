#include <stdio.h>
#define MAX 5

void enQueue(int);
void deQueue();
void display();

int front = -1, rear = -1;
int queue[MAX];

int main() {
    enQueue(10);
    enQueue(20);
    enQueue(30);
    deQueue();
    display();
    return 0;
}

void enQueue(int n) {
    if (rear == MAX - 1) {
        printf("Queue Is Full. Can't EnQueue\n");
    } else {
        if (front == -1)  // If queue was empty
            front = 0;
        rear = rear + 1;   // Increment rear properly
        queue[rear] = n;
        printf("Inserted -> %d\n", n);
    }
}

void deQueue() {
    if (front == -1) {
        printf("Queue is Empty!!\n");
    } else {
        printf("Deleted : %d\n", queue[front]);
        front++;
        if (front > rear)  // Reset when queue becomes empty
            front = rear = -1;
    }
}

void display() {
    if (rear == -1) {
        printf("Queue is Empty!!!\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++)
            printf("%d  ", queue[i]);
        printf("\n");
    }
}