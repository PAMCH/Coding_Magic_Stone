#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a1, a2, r1 = 0, r2 = 0;
    scanf("%d %d", &a1, &a2);

    while (a1 != 0) {
        r1 = r1 * 10 + a1 % 10;
        a1 /= 10;
    }
    while (a2 != 0) {
        r2 = r2 * 10 + a2 % 10;
        a2 /= 10;
    }

    if (r1 > r2) {
        printf("%d", r1);
    }
    else {
        printf("%d", r2);
    }

    return 0;
}
