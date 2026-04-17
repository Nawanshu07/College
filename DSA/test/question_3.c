#include <stdio.h>

int main()
{
    int stack[10], item, n, max = 10, top = -1;

    printf("How many numbers to push: ");
    scanf("%d", &n);

    printf("Enter the %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        if (top == max - 1)
        {
            printf("\nOverflow.\n");
            break;
        }
        else
        {
            scanf("%d", &item);
            top++;
            stack[top] = item;
        }
    }

    int ch = 1;
    
    while (ch == 1)
    {
        printf("\nCurrent Stack: ");
        if (top == -1) {
            printf("Empty");
        } else {
            for (int i = 0; i <= top; i++) {
                printf("%d ", stack[i]);
            }
        }

        printf("\nDo you want to pop element? (1 for Yes / 0 for No): ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            if (top == -1)
            {
                printf("Underflow\n");
                ch = 0; 
            }
            else
            {
                item = stack[top];
                top--;
                printf("Popped: %d\n", item);

                if (top == -1)
                {
                    printf("Underflow\n");
                    ch = 0; 
                }
            }
        }
    }

    return 0;
}