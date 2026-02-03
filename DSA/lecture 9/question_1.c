#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void list_traversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    int data, item;
    struct node *ptr = NULL, *avail , *start = NULL;

    printf("Enter data (-999 to end): ");
    scanf("%d", &data);

    while (data != -999) {
        avail  = malloc(sizeof(struct node));

        avail ->data = data;
        avail ->next = NULL;

        if (start == NULL) {
            start = ptr = avail ;
        } else {
            ptr->next = avail ;
            ptr = avail ;
        }

        printf("Enter data (-999 to end): ");
        scanf("%d", &data);
    }

    printf("\nList: ");
    list_traversal(start);


    printf("\nEnter item:");
    scanf("%d", &item);

    avail  = malloc(sizeof(struct node));

    if (avail == NULL) {
        printf("Overflow");
        return 0;
    }

    avail ->data = item;
    avail ->next = start;
    start = avail ;

    printf("\nList: ");
    list_traversal(start);

    return 0;
}