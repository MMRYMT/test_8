#include <stdio.h>

int main()
{
   int no;

   printf("请输入一个整数：");
   scanf("%d",&no);

   if (no == 0)
       puts("该整数为0");
   else if (no > 0)
       puts("该整数大于0");
   else if (no < 0)
       puts("该整数小于0");


   return 0;


}