// create node for left and rifgt child of a binary tree
#include <stdio.h>
#include <stdlib.h>
struct node {
    int rdata;
    int ldata;
    struct node *left;
    struct node *right;
    
};

int main() {
    int ch;
    
    printf("Enter the root of the tree:");
    scanf("%c",&ch);
    
    struct node *root = malloc(sizeof(struct node));
    
    printf("Enter left data:");
    scanf("%d",&root->ldata);

    printf("Enter right data:");
    scanf("%d",&root->rdata);
          

    struct node *ptr = root;

      for (int i = 0; i < 1; i++)
    {
         printf("left data: %d", ptr->ldata);
    }

    ptr = root;
    printf("\n");

    for (int i = 0; i < 1; i++)
    {
         printf("right data: %d", ptr->rdata);
    }
    
   

    return 0;
}