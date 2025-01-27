#include <stdio.h>

#define SIZE 5

int main() {
    int queue[SIZE];
    int front = -1;
    int rear = -1;

    printf("Enter the elements in the queue:\n");
    
    // Check if queue is full
    if (rear == SIZE - 1) {
        printf("Queue is full\n");
    } else {
        int n;
        for (int i = 0; i < SIZE; i++) {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &n);
            
            // Check if rear has reached the end of the queue
            if (rear == SIZE - 1) {
                printf("Queue is full\n");
                break;
            } else {
                // Increment rear and add element to queue
                rear++;
                queue[rear] = n;
            }
        }
    }

    // Check if queue is empty
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Display the elements in the queue: ");
        for (int i = front + 1; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}
