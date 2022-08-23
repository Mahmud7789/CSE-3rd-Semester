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
void postOrderTravers(struct node *node){

    if(node == NULL){
        return;
    }
    else{
        postOrderTravers(node->left);
        postOrderTravers(node->right);
        printf("%d\t",node->data);
    }
}
int main()
{
    struct node *node = newnode(25);
    node->left = newnode(22);
    node->left->left = newnode(19);
    node->left->right = newnode(16);
    node->right = newnode(9);
    printf("Post order tree travers : ");
    postOrderTravers(node);
    return 0;
}
