#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Queue storage and pointers
int queue[MAX];
int front = -1;
int rear = -1;

// 1. Insert Operation (Enqueue)
void insert() {
    int item;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow!\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        printf("Enter element to insert: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
        printf("%d inserted successfully.\n", item);
    }
}

// 2. Delete Operation (Dequeue)
void delete() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow!\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

// 3. Display Operation
void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty!\n");
    } else {
        printf("\nQueue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n QUEUE MENU :");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
