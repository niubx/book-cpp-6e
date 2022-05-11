#include <stdio.h>
#include <string.h> // 提供 strlen() 函数原型
#include <stdlib.h>

#define DENSITY 62.4 // 人体密度（英制）

int main() {
    double weight, volume;
    char *ptr;
    char str[5];
    int size, letters;
    char name[40];

    printf("What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%s", str);

    weight = strtof(str, &ptr);
    size = sizeof name;
    letters = (int) strlen(name);
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters, ", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}