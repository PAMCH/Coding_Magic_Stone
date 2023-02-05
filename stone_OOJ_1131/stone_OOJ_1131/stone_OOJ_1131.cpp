#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    printf("%d %d\n", (a + (b + c) / 60) % 24, (b + c) % 60);

    return 0;
}