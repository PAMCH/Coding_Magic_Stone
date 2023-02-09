#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, a[51];
    int i, sum = 0, ave, res = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    ave = sum / n;

    for (i = 1; i <= n; i++) {
        if (a[i] > ave) {
            res += (a[i] - ave);
        }
    }

    printf("%d\n", res);
    
    return 0;
}