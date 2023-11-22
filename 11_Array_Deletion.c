#include <stdio.h>

void DeletionArray(int *arr1, int size, int capacity, int ind)
{
    for (int i = ind; i < size; i++)
    {
        arr1[i] = arr1[i + 1];
    }
}

void display(int *arr2, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("Value at index %d is: %d\n", i, arr2[i]);
    }
}
int main()
{
    int capacity = 10, size = 5;
    int arr[10] = {11, 18, 78, 65, 89};
    int index;
    printf("Enter index to be deleted: ");
    scanf("%d", &index);
    DeletionArray(&arr[0], size, capacity, index);
    size--;
    display(arr, size);
    return 0;
}