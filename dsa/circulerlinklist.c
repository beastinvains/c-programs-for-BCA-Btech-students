#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void add_at_beginning(int data){

    struct Node *newnode = malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = data;
    if(head == NULL){
        head = newnode;
        newnode->next = head;
        return;
    }
    struct Node *temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    newnode->next = head;
    temp->next = newnode;
    head = newnode;
}
void add_at_middle(int data, int pos){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node *newnode = malloc(sizeof(struct Node));
    if(newnode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = data;
    struct Node *temp = head;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
        if(temp == head){
            printf("Position does not exist\n");
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void add_at_end(int data){
    struct Node *temp=head;
    struct Node *newnode =malloc(sizeof(struct Node));
    newnode->data=data;
    if (temp==NULL){
        printf("list is empty");
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void print(){

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;

    do{
        printf("%d -> ", temp->data);
        temp = temp->next;
    }while(temp != head);

    printf("(back to head)\n");
}
void deleat_at_beganing(){
    struct Node *temp= head;
    struct Node *temp2= head;
    if(temp==NULL){
        printf("velue do not exixt\n");
        return;
    }
    if (temp->next==head){
        head=NULL;
        free(temp);
        return;
    }
    while(temp->next!=head){
        temp= temp->next;
    }
    temp->next=temp2->next;
    head=temp->next;
    free(temp2);

}
void delete_from_end(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    if(head->next == head){
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    struct Node *last = temp->next;
    temp->next = head;
    free(last);
}
void search(int data){
    struct Node *temp=head;
    if(temp==NULL){
        printf("list is empty\n");
        return;
    }
    if(temp->next==head){
        if(temp->data==data){
            printf("data at first position\n");
            return;
        }
        return;
    }
    while (temp->next!=head){
        if(temp->data==data){
            printf("data found\n");
            return;
        }
        temp=temp->next;
    }printf("data not found\n");
}
void main(){
add_at_beginning(12);
add_at_beginning(13);
print();
add_at_end(14);
print();
add_at_middle(13,2);//position is in frunt of seconmd node
print();
search(23);
search(12);


    
}