#include <stdio.h>

int main(void) {
    // C99 为类型大小提供 %zd 转换说明
    printf("%2zd bytes - [unsigned] char.\n", sizeof(char));
    printf("%2zd bytes - [unsigned] short.\n", sizeof(short));
    printf("%2zd bytes - [unsigned] int.\n", sizeof(int));
    printf("%2zd bytes - [unsigned] long.\n", sizeof(long));
    printf("%2zd bytes - [unsigned] long long.\n", sizeof(long long));
    printf("%2zd bytes - float.\n", sizeof(float));
    printf("%2zd bytes - double.\n", sizeof(double));
    printf("%2zd bytes - long double.\n", sizeof(long double));
    printf("%2zd bytes - _Bool.\n", sizeof(_Bool));
    printf("%2zd bytes - _Complex.\n", sizeof(_Complex));

    return 0;
}

// --Mac

// --Win
//  1 bytes - [unsigned] char.
//  2 bytes - [unsigned] short.
//  4 bytes - [unsigned] int.
//  4 bytes - [unsigned] long.
//  8 bytes - [unsigned] long long.
//  4 bytes - float.
//  8 bytes - double.
// 16 bytes - long double.
//  1 bytes - _Bool.
// 16 bytes - _Complex.