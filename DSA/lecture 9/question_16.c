#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

int main()
{
    int data;
    struct node *ptr = NULL, *newnode, *start = NULL;

    printf("Enter data (-999 to end): ");
    scanf("%d", &data);

    while(data != -999)
    {
        newnode = malloc(sizeof(struct node));

        newnode->info = data;
        newnode->link = NULL;

        if(ptr == NULL)
        {
            start = ptr = newnode;
        }
        else
        {
            ptr->link = newnode;
            ptr = newnode;
        }

        printf("Enter data (-999 to end): ");
        scanf("%d", &data);
    }
        ptr = start;
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->info);
        ptr = ptr->link;
    }
    printf("NULL");

    return 0;
}