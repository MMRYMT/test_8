#include <stdio.h>

int main()
{
   int no,i;

   printf("请输入一个正整数:");
   scanf("%d",&no);

   
   i = 0;
   while (no > 0 ){
       no /= 10;
       i++;

}
   printf("该整数的位数是:%d", i); 

   return 0;

}