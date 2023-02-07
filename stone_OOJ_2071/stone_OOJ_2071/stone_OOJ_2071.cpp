#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a, i, n1, n2, cnt = 0;

    scanf("%d", &a);

    for (int i = 1; i <= 500; i++) {
        n2 = i * i + a;
        n1 = sqrt(n2);
        if (n1 * n1 == n2) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
