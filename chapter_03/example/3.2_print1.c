#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001");

    int ten = 10;
    int two = 2;
    printf("正确使用：%d minus %d is %d.\n", ten, 2, ten - two);
    printf("错误使用：%d minus %d is %d.\n", ten);

    return 0;
}