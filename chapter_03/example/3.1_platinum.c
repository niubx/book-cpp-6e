#include <stdio.h>

int main(void) {
    float weight;   // 体重
    float value;    // 相等重量黄金的价值
    printf("你的体重值多少黄金？Let's check it out.\n");
    printf("请输入你的体重（千克）：");
    scanf("%f", &weight);
    value = weight * 2233;  // 价值一千克黄金值 ￥22330
    printf("你的体重值 %f 元的黄金。", value);

    getchar();  // 接受换行符
    getchar();  // 阻塞接受输入，使程序暂停

    return 0;
}