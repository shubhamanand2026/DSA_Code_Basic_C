#include <stdio.h>

void TraversalArray(int *arr1, int range)
{
    for (int i = 0; i < range; i++)
    {
        printf("%d\n", arr1[i]);
    }
    printf("\n");
}

void InsertionArray(int index, int *arr2, int size)
{
    int num;
    printf("Enter element to Insert: ");
    scanf("%d", &num);
    for (int j = (size - 1); j >= index; j--)
    {
        arr2[j + 1] = arr2[j];
    }
    arr2[index] = num;
}


int main()
{
    int arr[100] = {11, 3, 44, 87};
    int i, size = 4;
    printf("Enter index at which element is to be inserted: ");
    scanf("%d", &i);
    TraversalArray(&arr[0], size);
    InsertionArray(i, arr, size);
    size++;
    TraversalArray(&arr[0], size);
    return 0;
}