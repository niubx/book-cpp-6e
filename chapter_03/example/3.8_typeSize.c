#include <stdio.h>

int main(void) {
    // C99 为类型大小提供 %zd 转换说明
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long-long [int] has a size of %zd bytes.\n", sizeof(long long));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}

// Type char has a size of 1 bytes.
// Type short has a size of 2 bytes.
// Type int has a size of 4 bytes.
// Type long has a size of 8 bytes.
// Type long-long [int] has a size of 8 bytes.
// Type float has a size of 4 bytes.
// Type double has a size of 8 bytes.
// Type long double has a size of 16 bytes.