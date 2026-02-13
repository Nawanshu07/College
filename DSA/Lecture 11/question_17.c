
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int roll;
    char name[50];
    int m1;
    int m2;
    int m3;
    struct node *link;
};

int main()
{
    printf("Enter the number of students: ");
    int n;
    scanf("%d", &n);

    struct node *head = NULL;
    struct node *newnode = NULL;
    struct node *ptr = NULL;

    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter roll number, name, m1, m2, m3 for student %d: ", i + 1);
        scanf("%d %s %d %d %d", &newnode->roll, newnode->name, &newnode->m1, &newnode->m2, &newnode->m3);
        newnode->link = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            ptr = head;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = newnode;
        }
        newnode = newnode->link;
    }

    printf("\nStudent Records:\n");
    newnode = head;
    while (newnode != NULL)
    {
        printf("Roll: %d, Name: %s, Marks1: %d, Marks2: %d, Marks3: %d\n",
               newnode->roll, newnode->name, newnode->m1, newnode->m2, newnode->m3);
        newnode = newnode->link;
    }

    return 0;
}