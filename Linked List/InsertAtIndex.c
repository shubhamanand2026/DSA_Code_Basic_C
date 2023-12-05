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

struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *p = head;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    int i = 0;
    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
    head = InsertAtIndex(head, 10, 2);
    Traversal(head);
    return 0;
}