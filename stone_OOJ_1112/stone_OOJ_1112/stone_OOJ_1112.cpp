﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;

    scanf("%d", &a);

    if (!(a % 2) && a > 2) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

