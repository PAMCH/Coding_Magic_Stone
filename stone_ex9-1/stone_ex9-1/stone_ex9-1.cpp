﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d+%d+%d=%d\n", a, b, c, a + b + c);
    printf("%d-%d-%d=%d\n", a, b, c, a - b - c);
    printf("%d*%d*%d=%d\n", a, b, c, a * b * c);
    printf("%d/%d/%d=%d\n", a, b, c, a / b / c);

    return 0;
}