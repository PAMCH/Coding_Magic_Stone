#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a[11];
    int i, sum = 0, ans;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= 10; i++) {
        sum += a[i];
        if (sum <= 100) {
            ans = sum;
        }
        else {
            if (100 - ans >= sum - 100) {
                ans = sum;
            }
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
