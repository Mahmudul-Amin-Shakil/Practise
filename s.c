#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf ("%c",&ch);
    }
    for(i=0;i<n;i++)
    {
        printf ("%c",ch);
    }
    return 0;
}