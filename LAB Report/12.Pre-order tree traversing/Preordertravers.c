#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int data){

    struct node *node = (struct node*)malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}
void preOrderTraversing(struct node *root){

    if(root == NULL){
        return;
    }
    else{
        printf("%d\t",root->data);
        preOrderTraversing(root->left);
        preOrderTraversing(root->right);
    }
}

int main()
{
    struct node *root = newnode(22);
    root->left = newnode(23);
    root->left->left = newnode(24);
    root->left->right = newnode(25);
    root->right = newnode(26);
    printf("Pre-order tree travers : ");
    preOrderTraversing(root);

    return 0;

}
