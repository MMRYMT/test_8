#include <stdio.h>

int main ()
{
   int a,b;

   puts("请输入两个整数：");
   printf("请输入整数a:");scanf("%d",&a);
   printf("请输入整数b:");scanf("%d",&b);

   if (a % b)
       puts("b不是a的约数");
   else
       puts("b是a的约数");

   return 0;


}