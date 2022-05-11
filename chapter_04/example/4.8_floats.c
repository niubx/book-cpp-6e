#include <stdio.h>

int main(void) {
    const double RENT = 3852.99;

    printf("%%f      *%f*\n", RENT);
    printf("%%e      *%e*\n", RENT);
    printf("%%4.2f   *%4.2f*\n", RENT);
    printf("%%3.1f   *%3.1f*\n", RENT);
    printf("%%10.3f  *%10.3f*\n", RENT);
    printf("%%10.3E  *%10.3E*\n", RENT);
    printf("%%+4.2f  *%+4.2f*\n", RENT);
    printf("%%010.2f *%010.2f*\n", RENT);

    return 0;
}
