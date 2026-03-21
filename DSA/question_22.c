#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
}; 


int main()
{
    int ldata;
    struct node *ptr = NULL, *newnode, *lstart = NULL;

    printf("Enter left data (-999 to end): ");
    scanf("%d", &ldata);

    while(ldata != -999)
    {
        newnode = malloc(sizeof(struct node));
        newnode->info = ldata;
        newnode->link = NULL;

        if(ptr == NULL)
        {
            lstart = ptr = newnode;
        }
        else
        {
            ptr->link = newnode;
            ptr = newnode;
        }

        printf("Enter left data (-999 to end): ");
        scanf("%d", &ldata);
    }

// right 

    int rdata;
    struct node *ptr2 = NULL, *newnodee, *rstart = NULL;

    printf("Enter right data (-999 to end): ");
    scanf("%d", &rdata);

    while(rdata != -999)
    {
        newnodee = malloc(sizeof(struct node));
        newnodee->info = rdata;
        newnodee->link = NULL;

        if(ptr2 == NULL)
        {
            rstart = ptr2 = newnodee;
        }
        else
        {
            ptr2->link = newnodee;
            ptr2 = newnodee;
        }

        printf("Enter right data (-999 to end): ");
        scanf("%d", &rdata);
    }

    ptr = lstart;
    printf("Left data:");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->info);
        ptr = ptr->link;
    }



    printf("\n");

        printf("Right data:");
    ptr = rstart;
    while(ptr != NULL)
    {
        printf("%d  ", ptr->info);
        ptr = ptr->link;
    }

    return 0;
}