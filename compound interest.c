#include <stdio.h>
int main()
{
   int p, t, r;
   printf("enter the principle value");
   scanf("%d" ,&p);
   printf("enter the time (in year)");
   scanf("%d",&t);
   printf("enter the rate of interest");
   scanf("%d",&r);
   float si=(p*t*r)/100;
   printf("simple interest=%3f" ,si);
   return 0;
}
