#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a[10];
    int i, k = 1;

    for (i = 1; i <= 9; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 2; i <= 9; i++) {
        if (a[k] < a[i]) {
            k = i;
        }
    }

    printf("%d\n%d\n", a[k], k);

    return 0;
}
