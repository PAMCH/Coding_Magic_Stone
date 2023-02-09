#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, a[301], m, order, x, y;
    int i, j, sum, max, min;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (i = 1; i <= m; i++) {
        scanf("%d %d %d", &order, &x, &y);
        
        if (order == 1) {
            min = a[x];

            for (j = x; j <= y; j++) {
                if (min > a[j]) {
                    min = a[j];
                }
            }
            printf("%d\n", min);
        }
        else if (order == 2) {
            max = a[x];

            for (j = x; j <= y; j++) {
                if (max < a[j]) {
                    max = a[j];
                }
            }
            printf("%d\n", max);
        }
        else {
            sum = 0;

            for (j = x; j <= y; j++) {
                sum += a[j];
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
