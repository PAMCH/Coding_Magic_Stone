#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    while (a < c) {
        a += b;
        c -= d;
    }

    printf("%d", a);

    return 0;
}
