#include <stdio.h>
int main()
{
    int i;
    double num1,num2,num3;
    printf ("Enter the two number:");
    scanf ("%lf %lf",&num1,&num2);
    for ( ; ;i++)
    {
        printf ("Enter a number 1 to 4:");
        scanf ("%lf",&num3);
        if (num3==1)
        {
            printf ("%lf+%lf=%lf\n",num1,num2,num1+num2);
        }
            else if (num3==2)
        {
            printf ("%lf-%lf=%lf\n",num1,num2,num1-num2);
        }
        else if (num3==3)
        {
            printf ("%lf*%lf=%lf\n",num1,num2,num1*num2);
        }
        else if (num3==4)
        {
            printf ("%lf/%lf=%lf\n",num1,num2,num1/num2);
        }
        else
        {
            printf ("Wrong input\n");

        }
    }
    return 0;
}
