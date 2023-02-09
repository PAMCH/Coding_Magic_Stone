#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, a[101];
    int i, b, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= n; i++) {
        b = a[i] * i - sum;
        printf("%d ", b);
        sum += b;
    }

    return 0;
}
