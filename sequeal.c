#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf ("enter the number");
    scanf ("%d",&n);
    int arr[n];

    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)

    {
        //printf( "%d  ",arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);

    return 0;
}
