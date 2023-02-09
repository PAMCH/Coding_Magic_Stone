#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, a[101];
    int i, max, min;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[1];

    for (i = 2; i <= n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
        else if (min > a[i]) {
            min = a[i];
        }
    }

    printf("%d\n%d\n", max, min);

    return 0;
}
