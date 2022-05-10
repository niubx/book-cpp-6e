#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double weight; // 体重
    double value; // 相等重量黄金的价值
    char *ptr;
    char str[5];

    printf("你的体重值多少黄金？Let's check it out.\n");
    printf("请输入你的体重（千克）：");
    scanf("%s", str);
    weight = strtod(str, &ptr);
    if (weight == HUGE_VAL || weight == HUGE_VALF || weight == HUGE_VALL) {
        printf("strtod return %f\n", weight);
    } else if (weight) {
        value = weight * 2233;  // 价值 一千克黄金 值 ￥2233
        printf("你的体重值 %f 元的黄金。", value);
    } else {
        printf("No number found input is -> %s\n", ptr);
    }

    getchar();  // 接受换行符
    getchar();  // 阻塞接受输入，使程序暂停

    return 0;
}