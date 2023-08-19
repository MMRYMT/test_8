#include <stdio.h>

int main ()
{
   int month;

   printf("请输入月份:");
   scanf("%d",&month);

    switch (month)
    {
    case 1 :printf("1月是冬季\n");   break;
    case 2 :printf("2月是冬季\n");   break;
    case 3 :printf("3月是春季\n");   break;
    case 4 :printf("4月是春季\n");   break;
    case 5 :printf("5月是春季\n");   break;
    case 6 :printf("6月是夏季\n");   break;
    case 7 :printf("7月是夏季\n");   break;
    case 8 :printf("8月是夏季\n");   break;
    case 9 :printf("9月是秋季\n");   break;
    case 10 :printf("10月是秋季\n");  break;
    case 11 :printf("11月是秋季\n");  break;
    case 12 :printf("12月是冬季\n");  break;


    }


   return 0;


}