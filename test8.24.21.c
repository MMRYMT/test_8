#include <stdio.h>

int main() {
    int n, i = 0;
    printf("请输入一个整数值：");
    scanf("%d", &n);

    while(i < n) {
        if(i % 2 == 0) {
            printf("+");
        } else {
            printf("-");
        }
        i++;
    }

    return 0;
}
