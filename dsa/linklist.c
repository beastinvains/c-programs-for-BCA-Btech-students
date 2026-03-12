#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void add_at_beg(int data)
{
    struct Node *current = malloc(sizeof(struct Node));
    if (current == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    current->data = data;
    current->next = head;
    head = current;
}

void add_at_end(int data)
{
    struct Node *temp = head;
    struct Node *current = malloc(sizeof(struct Node));
    if (current == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    if (temp == NULL) {
        /* List empty: insert at head */
        current->data = data;
        current->next = NULL;
        head = current;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = current;
    current->next = NULL;
    current->data = data;
}

void add_at_middle(int data, int pos)
{
    int i = 1;
    struct Node *temp = head;
    struct Node *current = malloc(sizeof(struct Node));
    if (current == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    if (temp == NULL) {
        printf("List is empty, adding at the beginning.\n");
        add_at_beg(data);
        return;
    }

    for (i = 1; i <= pos; i++) {
        if (temp->next == NULL) {
            printf("Position exceeds list length, adding at the end.\n");
            add_at_end(data);
            return;
        }
        temp = temp->next;
    }

    current->data = data;
    current->next = temp->next;
    temp->next = current;
}

void delate_at_beg(void)
{
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    head = temp->next;
    free(temp);
}

void delate_at_end(void)
{
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    if (temp->next == NULL) {
        free(temp);
        head = NULL;
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

void delate_at_middle(int pos)
{
    struct Node *temp = head;
    int i = 1;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    for (i = 1; i < pos; i++) {
        if (temp->next == NULL) {
            printf("element do not exist\n");
            return;
        }
        temp = temp->next;
    }

    struct Node *node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    free(node_to_delete);
}

void update_at_value(int old_value, int new_value)
{
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data == old_value) {
            temp->data = new_value;
            return;
        }
        temp = temp->next;
    }
}

void update_at_position(int pos, int new_value)
{
    struct Node *temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp == NULL) {
            printf("position is empty\n");
            return;
        }
        temp = temp->next;
    }
    if (temp != NULL)
        temp->data = new_value;
}

void search(int data)
{
    struct Node *temp = head;
    int i = 1;
    while (temp != NULL) {
        if (temp->data == data) {
            printf("data is in %d position\n", i);
            return;
        }
        i++;
        temp = temp->next;
    }
}

void sort()
{
    if (head == NULL)
        return;

    struct Node *i, *j;
    int tmp;

    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
}

void reverse(void)
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void printList(void)
{
    struct Node *current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main(void)
{
    int key = 1;

    while (key != 0) {
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
        scanf("%d", &key);

        switch (key) {
        case 0:
            key = 0;
            printf("Exiting program.\n");
            break;

        case 1:
            printList();
            break;

        case 2: {
            printf("Enter data to insert at the beginning: ");
            int data;
            scanf("%d", &data);
            add_at_beg(data);
        } break;

        case 3: {
            printf("Enter data to insert in the middle: ");
            int data;
            scanf("%d", &data);
            int pos;
            printf("Enter position to insert (1-based index): ");
            scanf("%d", &pos);
            add_at_middle(data, pos - 1);
        } break;

        case 4: {
            printf("Enter data to insert at the end: ");
            int data;
            scanf("%d", &data);
            add_at_end(data);
        } break;

        case 5:
            delate_at_beg();
            break;

        case 6:
            delate_at_end();
            break;

        case 7: {
            printf("Enter position to delete (1-based index): ");
            int pos;
            scanf("%d", &pos);
            delate_at_middle(pos - 1);
        } break;

        case 8: {
            printf("Enter old value to update: ");
            int old_value, new_value;
            scanf("%d", &old_value);
            printf("Enter new value: ");
            scanf("%d", &new_value);
            update_at_value(old_value, new_value);
        } break;

        case 9: {
            printf("Enter position to update (1-based index): ");
            int pos;
            scanf("%d", &pos);
            printf("Enter new value: ");
            int new_value;
            scanf("%d", &new_value);
            update_at_position(pos, new_value);
        } break;

        case 10: {
            printf("Enter the data you wnat to find: ");
            int qa;
            scanf("%d", &qa);
            search(qa);
        } break;

        case 11:
            sort();
            break;

        case 12:
            reverse();
            break;

        default:
            break;
        }
    }

    return 0;
}
