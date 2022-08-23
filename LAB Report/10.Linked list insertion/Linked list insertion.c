#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
};
struct node *temp;
struct node *head;
struct node *newnode;
int choice;

struct node* insertAtFirst();
struct node* insertAtEnd();
void printLinkedList();

main()
{
    head = NULL;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data : ");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }

    printf("\nDo you want to continue(y=1/n=0)? : ");
    scanf("%d",&choice);
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("\nEnter data : ");
        scanf("%d",&newnode->data);

        newnode->next = NULL;

        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

        printf("\nDo you want to continue(y=1/n=0)? : ");
        scanf("%d",&choice);
    }
    printLinkedList(head);
    while(1){
        printf("\nEnter your choice for insert at first(1),End (2), display(3) & Exit(4): ");
        scanf("%d",&choice);
        switch(choice){
            case 1: head = insertAtFirst(head,newnode);
                break;
            case 2: head = insertAtEnd(head,newnode);
                break;
            case 3: printLinkedList(head);
                break;
            case 4: exit(0);
            default:printf("\nInvalid");
        }
    }
}
//An user define function for insert data at begining.
struct node* insertAtFirst(struct node *head,struct node *newnode){

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data which you want to insert at first :");
    scanf("%d",&newnode->data);

    newnode->next = head;
    head = newnode;
    return head;

}
//An user define function for insert data at end.
struct node* insertAtEnd(struct node *head,struct node *newnode){

    temp=head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data which you want to insert at end:");
    scanf("%d",&newnode->data);

    newnode->next = NULL;
    temp->next = newnode;
    return head;
}

void printLinkedList(struct node *ptr){

    int i=0,count = 0;
    while(ptr != NULL){
        printf("\nElement [%d] = %d\n",i,ptr->data);
        ptr = ptr->next;
        i++;
        count++;
    }
    printf("\nNumber of element : %d\n",count);
}
