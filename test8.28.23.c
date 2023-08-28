#include <stdio.h>

int main() {
    int length, width;
    printf("请输入长方形的长度和宽度：");
    scanf("%d %d", &length, &width);

    // 确定行数和列数
    int rows = (length < width) ? length : width;
    int cols = (length > width) ? length : width;

    printf("长方形的图案如下：\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
