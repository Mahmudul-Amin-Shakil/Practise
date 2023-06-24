#include <stdio.h>
int main()
{
    int n;
    long long int a,b,c;
    scanf ("%d",&n);
    while (n--)
    {
        scanf ("%lld %lld %lld",&a,&b,&c);
        printf ("%lld\n",a*b*c);
    }
    return 0;
}
