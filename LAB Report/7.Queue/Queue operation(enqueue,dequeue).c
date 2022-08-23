#include<stdio.h>

#define size 5

int front = 0;
int rear = -1;
int array[size];
void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    while(1){
        printf("\nEnter your choice for enqueue(1),dequeue(2),display(3) & Exit(4): ");
        scanf("%d",&choice);
        switch(choice){
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: exit(0);
            default:printf("\nInvalid");
        }
    }
    return 0;
}
void enqueue(){
    int element;
    if(rear==size-1){
        printf("\nQueue overflow!");
    }
    else{
        printf("\nEnter element for add : ");
        scanf("%d",&element);
        rear = rear + 1;
        array[rear] = element;
    }
}
void dequeue(){
    if(rear == -1){
        printf("\nQueue underflow!");
    }
    else{
        printf("\nRemoved element : %d\n",array[front]);
        front=front+1;
    }
}
void display(){
    int i;
    if(rear == -1){
        printf("\nQueue underflow!");
    }
    else{
        printf("\nQueue elements : { ");
        for(i=front;i<=rear;i++){
            printf("%d, ",array[i]);
        }
        printf("}\n");
    }
}

