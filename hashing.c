#include <stdio.h>
#define SIZE 10

// Hash table of fixed size
int hashTable[SIZE];

// Hash function: simple modulo operation
int hash(int key) {
    return key % SIZE;
}

// Insert a key into the hash table using linear probing
void insert(int key) {
    int index = hash(key); // Get initial hash index
    // Linear probing in case of collision
    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE; // Move to next index (circularly)
    }
    hashTable[index] = key; // Insert key at available position
}

// Display the contents of the hash table
void display() {
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1)
            printf("%d --> %d\n", i, hashTable[i]); // Show index and key
        else
            printf("%d --> empty\n", i); // Show empty slot
    }
}

int main() {
    // Initialize all hash table elements to -1 (indicating empty)
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    // Insert keys into the hash table
    insert(5);
    insert(15);
    insert(25);
    insert(35);

    // Display final hash table state
    display();

    return 0;
}
