#include <stdio.h>

int main() {
    int num1, num2, sum = 0;
    
    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);
    
    int i = num1;
    do {
        sum += i;
        i++;
    } while(i <= num2);
    
    printf("它们之间所有整数的和为：%d\n", sum);
    
    return 0;
}
