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

struct Node *DeleteAnyNode(struct Node *node, struct Node *head)
{
    struct Node *ptr = head;
    if (node == ptr)
    {
        head = head->next;
        free(ptr);
        return head;
    }
    else
    {
        while (ptr->next != node)
        {
            ptr = ptr->next;
        }
        ptr->next = node->next;
        free(node);
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
    head = DeleteAnyNode(second, head);
    Traversal(head);
    return 0;
}