#include <stdio.h>
int main()
{
    int arr[100], i, size;
    printf("size of array :");
    scanf("%d", &size);
    printf("elemnts of array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("elemnts of array are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}