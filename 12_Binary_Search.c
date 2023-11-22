#include <stdio.h>

void BinarySearch(int *arr, int num, int size)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;

    while (1)
    {
        if (arr[low] != num && arr[high] != num)
        {
            if (low == high - 1)
            {
                printf("Number Not found");
                break;
            }
            if (arr[mid] != num)
            {
                if (arr[mid] < num)
                {
                    low = mid;
                    mid = (low + high) / 2;
                }
                else if (arr[mid] > num)
                {
                    high = mid;
                    mid = (low + high) / 2;
                }
            }
            else
            {
                printf("Number found");
                break;
            }
        }
        else
        {
            printf("Number found");
            break;
        }
    }
}
int main()
{
    int arr[9] = {2, 8, 14, 32, 66, 100, 104, 200, 400};
    int n, size = 9;
    printf("Enter number to be Search: ");
    scanf("%d", &n);
    BinarySearch(arr, n, size);
    return 0;
}