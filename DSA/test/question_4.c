#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue() {
    int value;

    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("Element inserted\n");
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

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
            printf("Program exited\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}