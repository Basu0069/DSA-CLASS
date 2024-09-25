#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the queue (Enqueue)
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full! Cannot insert %d\n", value);
    } else {
        if (front == -1)
            front = 0; // Set front to 0 if queue was empty
        rear++;
        queue[rear] = value;
        printf("Inserted %d into the queue.\n", value);
    }
}

// Function to display the queue
void displayQueue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main
