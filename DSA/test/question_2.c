//implement a binary tree for the dataset - {50,40,30,80,70,60}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void printTree(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printTree(root->left);
    printTree(root->right);
    printf("%d ", root->data);
}

int main() {
    struct Node* root = newNode(50);
    root->left = newNode(40);
    root->right = newNode(80);
    root->left->left = newNode(30);
    root->left->right = newNode(60);
    root->right->left = newNode(70);
    
    printf("Root- %d", root->data);
    printf("\n");
     
    printTree(root->left);
    printTree(root->right);
    printf("\n");
    
    return 0;
}