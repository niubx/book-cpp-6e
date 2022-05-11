#include <stdio.h>

#define PRAISE "You are extraordinary being."

int main(void) {
    char name[40];
    printf("What's your name?\n");
    scanf("%s", name); // 只会读取第一个单词
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}
