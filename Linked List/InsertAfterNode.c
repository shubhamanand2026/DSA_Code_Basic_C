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

void InsertAfterNode(struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 35;
    fourth->next = NULL;

    Traversal(head);
    printf("\n");
    InsertAfterNode(second, 10);
    Traversal(head);
    return 0;
}