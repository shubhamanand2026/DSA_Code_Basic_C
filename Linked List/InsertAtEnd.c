#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element of Linked List is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node *p = head;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    // Memory Allocated for
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;

    Traversal(head);
    printf("\n");
    head = InsertAtEnd(head, 10);
    Traversal(head);
    return 0;
}