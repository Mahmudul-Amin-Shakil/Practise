 #include <stdio.h>
 int main()
 {
     char str[]="shakil";
     char test[]="risana";
     int i,j=0,f=0;
     for (int i=0;i<6;i++)
        if (str[i]==test[j])
     {
         j++;
     }
     else f=1;
     if (f==0)
        printf ("equal\n");
     else
     printf ("not rqual\n");
     return 0;
 }
