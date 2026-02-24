#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
    int expo;
    int coff;
    struct node *next;
};

void display_coff(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->coff);
        ptr = ptr->next;
    }
  }  

void display_expo(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->expo);
        ptr = ptr->next;
    }
  }  

int main() {
    struct node *ptr, *newnode, *start;
    start = ptr = NULL;
    
    int e = 0;
    int c = 0;
    while (1)
    {
        printf("Enter the expo (-999 to exit): ");
        scanf("%d", &e);
    
        if (e == -999)
            break;
        
        printf("Enter the cofficient: ");
        scanf("%d",&c);
    
        newnode = malloc(sizeof(struct node));
        newnode->expo = e;
        newnode->coff = c;
        newnode->next = NULL;
    
        if (start == NULL)
        {
            start = ptr = newnode;
        }
        else
        {
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    
    ptr = start;
    display_expo(ptr);

printf("\n");

    ptr = start;
    display_coff(ptr);
    
    return 0;
}