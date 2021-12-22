#include <stdio.h>

int main(void) {
    int ten = 10;
    int two = 2;
    printf("正确使用：\n");
    printf("%d minus %d is %d.\n", ten, 2, ten - two);
    printf("错误使用：\n");
    printf("%d minus %d is %d.\n", ten);

    return 0;
}