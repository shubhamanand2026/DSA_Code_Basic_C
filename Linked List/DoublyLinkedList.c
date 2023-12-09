#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element of Doubly Linked List is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void BothSideTraversal(struct Node *head)
{
    struct Node *ptr1 = head;
    struct Node *ptr2 = (struct Node *)malloc(sizeof(struct Node));
    while (ptr1 != NULL)
    {
        printf("Element of Doubly Linked List is: %d\n", ptr1->data);
        if (ptr1->next == NULL)
        {
            ptr2 = ptr1;
        }
        ptr1 = ptr1->next;
    }
    printf("\n");
    while (ptr2 != NULL)
    {
        printf("Element of Doubly Linked List is: %d\n", ptr2->data);
        ptr2 = ptr2->prev;
    }
}

int main()
{
    struct Node *head;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;

    head = (struct Node *)malloc(sizeof(struct Node));
    N2 = (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));
    N4 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = N2;

    N2->data = 56;
    N2->prev = head;
    N2->next = N3;

    N3->data = 12;
    N3->prev = N2;
    N3->next = N4;

    N4->data = 23;
    N4->prev = N3;
    N4->next = NULL;

    Traversal(head);
    printf("\n");
    BothSideTraversal(head);

    return 0;
}