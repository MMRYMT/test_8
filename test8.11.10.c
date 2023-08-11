# include <stdio.h>
int main ()
{
   int n1,n2,n3,n4;
   double d1,d2,d3,d4;

   n1 = 5 / 2;  n2 =5.0/2.0;
   n3 = 5.0 /2; n4 = 5 /2.0;

   d1 = 5.0 / 2.0;  d2 = 5 / 2;
   d3 = 5.0 / 2;  d4 = 5 / 2.0;


   printf("n1*d1=%f\n",n1*d1);
   printf("n2+d2=%f\n",n2+d2);
   printf("n3/d3=%f\n",n3/d3);
   printf("n4-d4=%f\n",n4-d4);

   return 0;

}