#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *p)
{
    while (p != NULL)
    {
        printf("Element is: %d\n", p->data);
        p = p->next;
    }
}

void InsertionBetween(struct Node *second, struct Node *start)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = 157;
    ptr->next = second->next;
    second->next = ptr;
    Traversal(start);
}

int main()
{
    // Creating pointer structure for Linked List
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating Space in Heap for Linked Lists
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Storing data in Linked Lists
    head->data = 4;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;
    printf("Linked List Before: \n");
    Traversal(head);
    printf("Linked List After: \n");
    InsertionBetween(second, head);

    return 0;
}