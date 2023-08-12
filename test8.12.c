#include <stdio.h>

int main() {
    int height;
    float weight;

    printf("请输入您的身高：");
    scanf("%d", &height);

    weight = (height - 100) * 0.9;

    printf("您的标准体重为：%.1f公斤\n", weight);

    return 0;
}