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
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *DeleteAtLast(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;

    Traversal(head);
    printf("\n");
    head = DeleteAtLast(head);
    Traversal(head);
    return 0;
}