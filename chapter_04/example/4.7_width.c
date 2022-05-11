#include <stdio.h>

#define PAGES 959
#define A 1

int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    printf("----------------\n");
    printf("*%d*\n", A);
    printf("*%2d*\n", A);
    printf("*%10d*\n", A);
    printf("*%-10d*\n", A);

    return 0;
}