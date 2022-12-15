//
// Created by niubx on 2022/12/14.
//

#include <stdio.h>

int main(void) {
    printf("%c %d %#o %#x\n", '\r', '\r', '\r', '\r');
    printf("1234\r56\n");

    char ch;
    ch = '\r';
    printf("1234%c56\n", ch);
    ch = 13;
    printf("1234%c56\n", ch);
    ch = '\015';
    printf("1234%c56\n", ch);
    ch = '\x0d';
    printf("1234%c56\n", ch);

    return 0;
}