#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    sum = a;
    while (a >= b) {
        sum += a / b;
        a = a / b + a & b;
    }

    printf("%d\n", sum);

    return 0;
}
