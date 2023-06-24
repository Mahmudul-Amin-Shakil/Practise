#include <stdio.h>
int main()
{
    int arr[100], i, size, pos, num;
    printf("size of array :");
    scanf("%d", &size);
    printf("elements of array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("elemnts of array are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}