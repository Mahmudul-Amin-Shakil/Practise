#include<stdio.h>
int main()
{
    int t,n,k,i,j,l,f1,f2,f3;
    scanf("%d",&t);
    scanf("%d %d",&n,&k);
    f1=1;
    f2=1;
    f3=1;
    for( i=1;i<=(n+k-1);i++)
    {
        f1=f1*i;
    }
    for(j=1;j<=n;j++)
    {
        f2=f2*j;
    }
    for(l=1;l<=(k-1);l++)
    {
        f3=f3*l;
    }
    printf("%d\n",(f1/(f2*f3)));
    return 0;
}
