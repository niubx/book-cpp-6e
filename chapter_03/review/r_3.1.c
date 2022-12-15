#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define printf __mingw_printf

int main(void) {
    system("chcp 65001");

    printf("short 最大值: %d\n", SHRT_MAX);
    printf("int/long 最大值: %d\n", INT_MAX);
    printf("long long 最大值: %lld\n", LONG_LONG_MAX);

    printf("float 最大值: %f\n", FLT_MAX);
    printf("double 最大值: %f\n", DBL_MAX);
    printf("long double 最大值: %Lf\n", LDBL_MAX);

    return 0;
}

// short 最大值: 3,2767
// int/long 最大值: 21,4748,3647
// long long 最大值: 922,3372,0368,5477,5807

// float 最大值: 340,2823,4663,8528,8598,1170,4183,4845,1692,5440.000000

// 关于 long double: https://blog.csdn.net/qq_43019319/article/details/108981302 