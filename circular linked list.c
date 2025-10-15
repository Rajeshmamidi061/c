#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;
NODE *head = NULL;
int size = 0;

NODE *create() {
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    size++;
    return newnode;
}

void insertAtBegin() {
    NODE *newnode = create();
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        NODE *temp = head;
        while (temp->next != head) 
            temp = temp->next;
        temp->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertAtEnd() {
    NODE *newnode = create();
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        NODE *temp = head;
        while (temp->next != head) 
            temp = temp->next;
        temp->next = newnode;
        newnode->next = head;
    }
}

void insertAtAnywhere() {
    int pos, loc = 1;
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return;
    }
    
    if (pos == 1) {
        insertAtBegin();
        return;
    }
    
    NODE *newnode = create();
    NODE *temp = head;
    while (loc < pos - 1) {
        temp = temp->next;
        loc++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteAtBegin() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    NODE *temp = head, *last = head;
    while (last->next != head) 
        last = last->next;
    
    if (head->next == head) 
        head = NULL;
    else {
        head = head->next;
        last->next = head;
    }
    printf("%d is removed\n", temp->data);
    free(temp);
    size--;
}

void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    NODE *temp = head, *prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    if (head->next == head) 
        head = NULL;
    else 
        prev->next = head;
    printf("%d is removed\n", temp->data);
    free(temp);
    size--;
}

void deleteAtAnywhere() {
    int pos, loc = 1;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return;
    }
    
    if (pos == 1) {
        deleteAtBegin();
        return;
    }
    
    NODE *temp = head, *prev = NULL;
    while (loc < pos) {
        prev = temp;
        temp = temp->next;
        loc++;
    }
    prev->next = temp->next;
    printf("%d is removed\n", temp->data);
    free(temp);
    size--;
}

void traverse() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    NODE *temp = head;
    do {
        printf("->%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void reverse(NODE *t, NODE *prev) {
    if (t->next == head) {
        head = t;
        t->next = prev;
        return;
    }
    reverse(t->next, t);
    t->next = prev;
}

void reverseList() {
    if (head == NULL || head->next == head) return;
    reverse(head, NULL);
}

int main() {
    int ch;
    do {
        printf("1. Insert at Begin\n2. Insert at End\n");
        printf("3. Insert at Anywhere\n4. Delete at Begin\n");
        printf("5. Delete at End\n6. Delete at Anywhere\n");
        printf("7. Traverse\n8. Reverse\n9. Count\n10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1: insertAtBegin(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtAnywhere(); break;
            case 4: deleteAtBegin(); break;
            case 5: deleteAtEnd(); break;
            case 6: deleteAtAnywhere(); break;
            case 7: traverse(); break;
            case 8: reverseList(); break;
            case 9: printf("Number of elements: %d\n", size); break;
            case 10: exit(0);
            default: printf("Invalid choice!\n");
        }
    } while (1);
    return 0;
}
