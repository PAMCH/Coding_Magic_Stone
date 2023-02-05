#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, c;

    scanf("%d", &a);

    b = a / 2;
    c = a - b;

    printf("%d\n", (b + 1) * (c + 1));

    return 0;
}