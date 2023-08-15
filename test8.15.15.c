#include <stdio.h>

int main()
{
   int a;
   printf("请输入一个整数:");
   scanf("%d",&a);

  if (a < 0)  
{
        a = -a;
    
}

    printf("该整数的绝对值是：%d\n", a);

    return 0;




}