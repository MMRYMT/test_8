#include <stdio.h>

int main ()
{
   int n = 0;
   int sum = 0;
   

   printf("n的值:");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++){
         
         sum += i;

   }

   printf("1到%d的和为:%d",n,sum);

   return 0;


}