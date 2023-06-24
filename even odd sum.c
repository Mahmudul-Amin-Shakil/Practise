#include <stdio.h>
int main()
{
    int n,i;
    printf ("enter the number");
    scanf ("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i=0;i<n;i++)
    {
    if (arr[i]%2==0)
    arr[i]=arr[i]/2;

    else
    arr[i]=arr[i]*2;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
