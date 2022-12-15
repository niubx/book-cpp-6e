#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define printf __mingw_printf

int main(void) {
    system("chcp 65001");

    printf("0X44: %d\n", 0XAA);

    return 0;
}