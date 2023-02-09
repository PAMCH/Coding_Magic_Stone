#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int p, q;
    int n = 0, a[101], m = 0, b[101];
    int i, j;

    scanf("%d %d", &p, &q);

    for (i = 1; i <= p; i++) {
        if (p % i == 0) {
            a[++n] = i;
        }
    }
    for (i = 1; i <= q; i++) {
        if (q % i == 0) {
            b[++m] = i;
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            printf("%d %d\n", a[i], b[j]);
        }
    }
    return 0;
}
