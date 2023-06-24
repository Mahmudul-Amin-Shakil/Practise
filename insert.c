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
    printf("enter the pos :");
    scanf("%d", &pos);
    printf("enter the num :");
    scanf("%d", &num);
    for (i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size++;
    printf("elemnts of array are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}