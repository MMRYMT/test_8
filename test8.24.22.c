#include <stdio.h>

int main()
{
   int no;
   printf("请输入一个正整数:");
   scanf("%d" ,&no);

   printf("该整数逆向显示的结果是");
   while (no > 0){
      printf("%d", no % 10);
      no /= 10;


   }

      puts("。 ");

      return 0;


}