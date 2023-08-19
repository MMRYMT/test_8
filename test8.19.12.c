#include <stdio.h>

int main()
{
   int retry;

   do{
       int a;

       printf("请输入一个整数：");
       scanf("%d",&a);

       if (a == 0)
           puts("该整数为0");
       else if (a > 0)
           puts("该整数大于0");
       else 
           puts("该整数小于0");

       printf("要重复一次吗?【yes^0/no^9】:");
       scanf("%d",&retry);




   }while(retry == 0);

    return 0;

}