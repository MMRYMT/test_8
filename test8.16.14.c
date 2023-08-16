#include <stdio.h>

int main ()
{
   int a,b,c,d,max;
   
   puts("请输入四个整数");
   printf("整数a:");  scanf("%d",&a);
   printf("整数b:");  scanf("%d",&b);
   printf("整数c:");  scanf("%d",&c);
   printf("整数d:");  scanf("%d",&d);

   max = a;

   if (b > max)max = b;
   if (c > max)max = c;
   if (d > max)max = d;

   printf("最大值是%d\n",max);

   return 0;

}