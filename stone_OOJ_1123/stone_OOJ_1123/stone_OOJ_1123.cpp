#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, val;
    int i, sum = 0, b[12], x, c1 = 0, c2 = 0;

    for (i = 2; i <= 9; i++) {
        b[i] = 4;
    }
    b[10] = 16;
    b[11] = 4;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &val);
        sum += val;
        b[val]--;
    }

    x = 21 - sum;

    for (i = 2; i <= 11; i++) {
        if (x < i) {
            c1 += b[i];
        }
        else {
            c2 += b[i];
        }
    }

    if (c1 > c2) {
        printf("STOP\n");
    }
    else {
        printf("DRAW\n");
    }

    return 0;
}
