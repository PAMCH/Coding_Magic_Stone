#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, x, p1, p2, p3;
    int i, sum = 0;

    scanf("%d", &n);
    scanf("%d", &x);

    for (i = 1; i <= n; i++) {
        scanf("%d %d", &p1, &p2);

        if (p1 <= p2 && x >= p2 - p1) {
            sum += p2;
        }
        else if (p2 < p1 && x >= p1 - p2) {
            sum += p1;
        }
        else {
            scanf("%d\n", &p3);
            sum += p3;
        }
    }

    printf("%d", sum);

    return 0;
}
