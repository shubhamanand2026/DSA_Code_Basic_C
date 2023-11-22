#include <stdio.h>

void LinearSearch(int *arr, int num, int sizeofArray)
{
    int c = 0;
    for (int i = 0; i < sizeofArray; i++)
    {
        if (num == arr[i])
        {
            printf("%d is found in Array at index %d", num, i);
            c++;
            break;
        }
    }
    if (c == 0)
    {
        printf("%d is not Found in Array", num);
    }
}

int main()
{
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    LinearSearch(arr, n, size);
    return 0;
}