#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

int main(void) {
    double area, circumference, radius;
    char *ptr;
    char str[5];
    printf("What's the radius of your pizza?\n");
    scanf("%s", str);
    radius = strtod(str, &ptr);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("area: %.2f, circumference: %.2f\n", area, circumference);

    return 0;
}