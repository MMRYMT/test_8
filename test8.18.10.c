#include <stdio.h>

int main()
{
   int a,b;
   puts("请输入两个整数");
   printf("整数a:");  scanf("%d",&a);
   printf("整数b:");  scanf("%d",&b);

   if (a-b<=10 && b-a<=10)
       printf("它们的差小于等于10\n");
   else
       printf("它们的差大于等于11\n");



   return 0;


}