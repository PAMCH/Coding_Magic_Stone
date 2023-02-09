#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, a[21];
    int i, x, y;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    x = y = a[1];

    for (i = 1; i <= n; i++) {
        if (x > a[i]) {
            x = a[i];
        }
        else if (y < a[i]) {
            y = a[i];
        }
    }

    printf("%d\n", (y - x) * 2);

    return 0;
}
