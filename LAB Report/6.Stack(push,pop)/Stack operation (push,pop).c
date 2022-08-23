#include<stdio.h>
#define Size 5
int top=-1;
int array[Size];
void push();
void pop();
void display();

int main()
{
    int choice;
    while(1){
        printf("Enter your choice for push(1),pop(2),display(3)&Exit(4): ");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(0);
            default:printf("Invalid");
        }
    }
    return 0;
}
void push(){
    int element;
    if(top==Size-1){
        printf("Stack overflow\n");
    }else{
        printf("Enter element for push : ");
        scanf("%d",&element);
        top=top+1;
        array[top]=element;
    }
}
void pop(){
    if(top==-1){
        printf("Stack underflow");
    }else{
        printf("Poped element : %d\n",array[top]);
        top=top-1;
    }
}
void display(){
    int i;
    if(top==-1){
       printf("Stack underflow");
    }else{
        printf("Stack elements : {");
        for(i=top;i>=0;--i){
            printf("%d, ",array[i]);
        }
        printf("}\n");
    }
}
