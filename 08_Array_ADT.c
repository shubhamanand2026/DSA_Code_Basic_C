#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize; // we can also write it as (*a).total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("Enter value of Element i %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
void show(struct myArray *a)
{
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("Value at Index %d is: %d\n", i, (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    setVal(&marks);
    show(&marks);
    return 0;
}