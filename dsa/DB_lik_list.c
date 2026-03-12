#include <stdio.h>
#include <stdlib.h>
 struct node
 {
    struct node *prev;
    int data;
    struct node *next;
 };
 struct node *head = NULL;

void add_at_beganing(int data){
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode ==NULL){
        printf("failled");
        return;
    }
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void add_at_end(int data){
    struct node *newnode=malloc(sizeof(struct node));
    struct node *temp=head;
    if (newnode==NULL){
        printf("failled");
        return;
    }
    newnode->data=data;
    newnode->next=NULL;
    if (temp==NULL){
        head=newnode;
        newnode->prev=NULL;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;


}
void add_at_middle(int data, int index){
    struct node *newnode=malloc(sizeof(struct node));
    struct node *temp=head;
    newnode->data=data;
    for(int i =1;i<index;i++){
        if(temp==NULL){
            printf("not exist\n");
            return;
        }
        temp=temp->next;

    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;


}
void deleat_beganing(){
    struct node *temp=head;
    if(head==NULL){
        printf("list is empty");
    }
    if(head->next==NULL){
        head = NULL;
        free(temp);
        return;
    }
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void deleat_end(){
    struct node *temp=head;
    if(head==NULL){
        printf("list is empty\n");
        return;

    }
    if(temp->next==NULL){
        head=NULL;
        free(temp);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp=temp->prev;
    free(temp->next);
    temp->next=NULL;

}
void delete_mid(int index){
    struct node *temp=head;
    if(temp==NULL){
        printf("list is empty");
        return;
    }
    for (int i=1;i<=index;i++){
        if(temp==NULL){
            printf("node do not exixt");
            return;
        }
        temp=temp->next;
    }
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    temp->prev->next=temp->next;
    free(temp);
}
void sort(){

    if(head == NULL)
        return;

    struct node *temp1, *temp2;

    for(temp1 = head; temp1->next != NULL; temp1 = temp1->next){

        for(temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next){

            if(temp1->data < temp2->data){

                int temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
        }
    }
}
void upade_at_value(int old,int new){
    struct node *temp=head;
    while(temp!=NULL){
        if (temp->data==old){
            temp->data=new;
            return;
        }
        temp=temp->next;
    }
}
void update_at_position(int old,int new){
    struct node *temp=head;
    for(int i=1;i<old;i++){
        if(temp==NULL){
            printf("position is empty\n");
            return;
        }
        temp=temp->next;
    }
    if(temp!=NULL){
        temp->data=new;
    }
}
void reverse(){

    struct node *temp = NULL;
    struct node *current = head;

    while(current != NULL){

        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;  // move forward
    }

    if(temp != NULL)
        head = temp->prev;
}
void serch(int data){
    struct node *temp = head;
    int i=1;
    while (temp->next!=NULL )
    {
        if(temp->data==data){
            printf("data is in %d position\n",i);
            return;
        }
        i++;
        temp=temp->next;
    }
    printf("data not found\n");
    
}

void print(){
    struct node *temp =head;
    if(temp==NULL){
        printf("list is empty\n");
        return;
    }
    printf("list is :\n");
    printf("NULL <-> ");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}





void main(){

int key;
key=1;


while(key!=0){
printf("enter 1 for printing the list\n");
printf("Enter 2 for inserting at beginning\n");
printf("enter 3 for inserting at middle\n");
printf("Enter 4 for inserting at end\n");
printf("Enter 5 for deleting at beginning\n");
printf("Enter 6 for deleting at end\n");
printf("Enter 7 for deleting at middle\n");
printf("enter 8 for updating at value\n");
printf("enter 9 for updating at position\n");
printf("Enter 10 for searching data\n");
printf("Enter 11 for sorting the list\n");
printf("Enter 12 for reversing the list\n");
printf("Enter 0 for exiting the program\n");
scanf("%d",&key);

    switch (key){
        case 0:
            key=0;
            printf("exiting program\n");
            break;

        case 1:
            print();
            break;

        case 2:{
            printf("enter data to insert at beginning\n");
            int data;
            scanf("%d",&data);
            add_at_beganing(data);
        }break;

        case 3:{
            printf("enter data to insert at middle\n");
            int data;
            scanf("%d",&data);
            int index;
            printf("enter index to insert (1-based index)\n");
            scanf("%d",&index);
            add_at_middle(data,index-1);
        }break;

        case 4:
            printf("enter data to insert at end\n");
            int data;
            scanf("%d",&data);
            add_at_end(data);
        break;

        case 5:
            deleat_beganing();
            break;
        
        case 6:
            deleat_end();
            break;
    
        case 7:{
            int index;
            printf("enter index to delete (1-based index)\n");
            scanf("%d",&index);
            delete_mid(index-1);
        }break;

        case 8:{
            printf("enter old value to update\n");
            int old;
            scanf("%d",&old);
            printf("enter new value to update\n");
            int new;
            scanf("%d",&new);
            upade_at_value(old,new);
        }break;

        case 9:
            printf("enter position to update\n");
            int old_pos;
            scanf("%d",&old_pos);
            printf("enter new value to update\n");
            int new_value;
            scanf("%d",&new_value);
            update_at_position(old_pos,new_value);
        break;
        case 10:{
            printf("enter data to search\n");
            int data;
            scanf("%d",&data);
            serch(data);
        }break;

        case 11:
            sort();
        break;

        case 12:
            reverse();
        break;

        default:
            printf("invalid input\n");
        break;
    }
}
}


 