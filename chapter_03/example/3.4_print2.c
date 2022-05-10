#include <stdio.h>

int main(void) {
    unsigned int un = 3000000000;
    short small = 200;
    long big = 65537;
    long long veryBig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("small = %hd and %d\n", small, small);
    printf("big = %ld and %d\n", big, big);
    printf("big = %ld and not %hd\n", big, big);
    printf("veryBig = %lld and not %ld\n", veryBig, veryBig);

    return 0;
}