#include <stdio.h>
int main()
{
    printf("Size of array : ");
    int n;
    scanf("%d", &n);
    printf("Elements of array : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i < j)
                c++;
        }
    }
    printf("%d", c);
    return 0;
}