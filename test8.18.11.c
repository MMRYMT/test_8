#include <stdio.h>

int main()
{
   int a;

   printf("请输入一个整数:");
   scanf("%d",&a);

   switch(a % 2)
   {
    case 0 : puts("该数能被2整除");      break;
    case 1 : puts("该数除以2的余数是1");  break;



   }

   return 0;
    
}