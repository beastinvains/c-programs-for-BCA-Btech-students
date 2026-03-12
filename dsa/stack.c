#include "stdlib.h"
#include "stdio.h"
struct node {
    char data;
    struct node* next;
}*top=NULL;

void pop(){
    struct node* temp=top;
    if(temp==NULL){
        printf("it's empty");
        return;
    }

    top=temp->next;
    free(temp);

}
void push(char data){
struct node * new=malloc(sizeof(struct node));
if(new==NULL){
    printf("stack overflow");
    return;
}
new->data=data;
new->next=top;
top=new;
}
char peek(){
    if (top==NULL){
        printf("stack is empty\n");
        return '\0';
    }
    printf("TOP-> %c\n",top->data);
return top->data;
}
void print(){
    struct node * temp=top;
    if(temp==NULL){
        printf("it's empty\n");
        return;
    }
    if(temp->next==NULL){
        printf(" %c -> NULL",temp->data);
        return;
    }
    while(temp!=NULL){
        printf(" %c -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main(){

    int choice;
    char value;

    while(1){

        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Print Stack\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter symbol: ");
                scanf(" %c", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                printf("Top element: %c\n", peek());
                break;

            case 4:
                print();
                break;

            case 0:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
