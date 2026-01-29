#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
void main(){
    struct node *first;
    struct node *second;


    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

    first ->info = 34;
    first ->next = second;

    second ->info = 23;
    second ->next = NULL;

    printf("Data is %d , %d ", first ->info, second ->info);
    
}
