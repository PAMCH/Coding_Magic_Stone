#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a1, a2, r = 0;

    scanf("%d", &a1);

    a2 = a1;

    while (a1 != 0) {
        r = r * 10 + a1 % 10;
        a1 /= 10;
    }

    printf("%d\n", a2 + r);

    return 0;
}
