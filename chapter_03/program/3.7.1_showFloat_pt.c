#include <stdio.h>

int main(void) {
    float aBoat = 32000.0f;
    double aBet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aBoat, aBoat);
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aBoat);
    printf("%f can be written %e\n", aBet, aBet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}