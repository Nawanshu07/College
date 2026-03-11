#include <stdio.h>

void enqueue(int *r, int queue[], int item)

    if (*r == 9) {
        printf("Overflow\n");
    } else {
        (*r)++;
        queue[*r] = item;
}


void display(int queue[] , int f , int r){
    for (int i = f; i <= r; i++)
    {
        printf("%d ",queue[i]);
    }
}

int main() {
    int ch;
    int queue[10];
    int r = -1;
    int f = 0;

    printf("enter the choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        
        break;
    case 2:
        
        break;

    case 3:
        display();
        break;
    
    case 4:
        return 0;

    default:
        printf("Enter a valid choice!");
        break;
    }
    return 0;
}