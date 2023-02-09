#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n = 0, a[16];
    int val, i, j, cnt = 0;

    while (true) {
        scanf("%d", &val);

        if (val == 0) {
            break;
        }

        a[++n] = val;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i] * 2 == a[j]) {
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
