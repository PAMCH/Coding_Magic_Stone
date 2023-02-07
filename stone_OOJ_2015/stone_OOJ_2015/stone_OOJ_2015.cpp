#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a, b, cnt = 0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        b = sqrt(i);
        if (b * b == i) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
