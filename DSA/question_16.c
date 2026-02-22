#include <stdio.h>

int top = -1;
int size = 10;
int stack[10];

void push()
{
    if (top == size - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        int a;
        printf("Enter the element: ");
        scanf("%d", &a);
        stack[++top] = a;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top--]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("---- Stack ----\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. -999 Exit:");
        scanf("%d", &ch);

        if (ch == 1)
            push();
        else if (ch == 2)
            pop();
        else if (ch == 3)
            display();
        else if (ch == -999)
            break;
        else
            printf("Invalid choice\n");
    }
    return 0;
}
