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

struct Node *DeleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;
    if (index == 0)
    {
        head = head->next;
        free(p);
        return head;
    }
    else
    {
        while (i < (index - 1))
        {
            p = p->next;
            i++;
        }
        struct Node *q = p->next;
        p->next = q->next;
        free(q);
        return head;
    }
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
    head = DeleteAtIndex(head, 3);
    Traversal(head);
    return 0;
}