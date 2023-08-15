#include <stdio.h>

int main()
{
   int a,b;

   puts("请输入两个整数：");
   printf("整数a:");  scanf("%d",&a);
   printf("整数b:" ); scanf("%d",&b);

   if (a > b)
       puts("A大于B");
   else if (a == b)
       puts("A等于B");
   else if (a < b)
       puts("A小于B");
    

    return 0;


}