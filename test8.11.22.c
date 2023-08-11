#include <stdio.h>
int main()
{
   double a, b;
   printf("请输入两个整数\n");

   printf("整数a:"); scanf("%lf",&a);
   printf("整数b:"); scanf("%lf",&b);

   printf("a是b的=%f\n",a/b);

   return 0;


}