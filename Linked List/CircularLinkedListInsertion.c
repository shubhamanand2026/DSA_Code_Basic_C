#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *InsertionAtBeg(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    fourth->next = head;

    Traversal(head);
    printf("\n");
    head = InsertionAtBeg(head, 2);
    Traversal(head);

    return 0;
}