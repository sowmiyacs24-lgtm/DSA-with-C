

    if (last == NULL) {
        last = newnode;
        newnode->next = newnode;
    } else {
        newnode->next = last->next;
        last->next = newnode;
    }
}#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;

void insertBegin(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

void insertEnd(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL) {
        last = newnode;
        newnode->next = newnode;
    } else {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

void insertAfter(int key, int value) {
    struct node *temp;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL)
        return;

    temp = last->next;
    do {
        if (temp->data == key) {
            newnode->next = temp->next;
            temp->next = newnode;
            if (temp == last)
                last = newnode;
            return;
        }
        temp = temp->next;
    } while (temp != last->next);
}

void display() {
    struct node *temp;
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

int main() {
    int choice, value, key;

    while (1) {
        printf("1.InsertBegin 2.InsertEnd 3.InsertAfter 4.Display 5.Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            scanf("%d", &value);
            insertBegin(value);
        } else if (choice == 2) {
            scanf("%d", &value);
            insertEnd(value);
        } else if (choice == 3) {
            scanf("%d %d", &key, &value);
            insertAfter(key, value);
        } else if (choice == 4) {
            display();
        } else if (choice == 5) {
            break;
        }
    }
    return 0;
}