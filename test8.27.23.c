#include <stdio.h>

int main() {
    int num, count = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("%d的约数有：\n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("约数的个数为：%d\n", count);

    return 0;
}

