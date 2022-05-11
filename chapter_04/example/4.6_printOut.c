#include <stdio.h>

#define PI 3.1415926

int main(void) {
    int number = 7;
    float pies = 12.75f;
    int cost = 7800;

    printf("The %d contestants ate %f berry of pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing, %c%d.\n", '$', 2 * cost);
    printf("");

    return 0;
}