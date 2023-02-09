#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a, b, val;
    int i, sum = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    for (i = 1; i <= a; i++) {
        scanf("%d", &val);
        if (val > 0 && b == 1) {
            sum += val;
        }
        else if (b == 2) {
            sum += val * val;
        }
        else if (val > 0 && b == 3) {
            sum += val * val * val;
        }
    }

    printf("%d\n", sum);

    return 0;
}
