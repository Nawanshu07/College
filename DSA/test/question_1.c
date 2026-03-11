//Write a program to perform stack operations to the name of students make it menu driven
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 100
#define NAME_LEN 50

char stack[MAX][NAME_LEN];
int top = -1;

void push() {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        char name[NAME_LEN];
        printf("Enter student name: ");
        scanf("%s", name);
        top++;
        strcpy(stack[top], name);
        printf("%s pushed to stack.\n", name);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped: %s\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%s\n", stack[i]);
        }
    }
}

int main() {

    int ch;
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1 -> Push\n");
        printf("2 -> Pop\n");
        printf("3 -> Display\n");
        printf("4 -> Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    
    return 0;
}