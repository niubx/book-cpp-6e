#include <stdio.h>
#include <inttypes.h> // 支持可移植类型

int main(void) {
    int32_t my32;   // my32 是一个 32 位有符号整型变量
    my32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("my32 = %d\n", my32);
    printf("Next, let's not make assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", my32);

    return 0;
}