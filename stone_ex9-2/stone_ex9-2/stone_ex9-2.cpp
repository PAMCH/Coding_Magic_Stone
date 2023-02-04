#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    char a, b;

    scanf("%c %c", &a, &b);

    printf("%c:%d\n", a, a);
    printf("%c:%d\n", b, b);

    return 0;
}