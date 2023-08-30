#include <stdio.h>

int main() {
    int n;
    printf("请输入一个整数n：");
    scanf("%d", &n);

    printf("1到%d的整数值的2次方如下：\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d的2次方 = %d\n", i, i*i);
    }

    return 0;
}
