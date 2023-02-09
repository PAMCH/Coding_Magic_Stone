#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int x, y;
    int n = 0, a[11], m = 0, b[11];
    int i, j, sum = 0;

    scanf("%d %d", &x, &y);

    while (x) {
        a[++n] = x % 10;
        x /= 10;
    }
    while (y) {
        b[++m] = y % 10;
        y /= 10;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            sum += a[i] * b[j];
        }
    }
    
    printf("%d\n", sum);

    return 0;
}
