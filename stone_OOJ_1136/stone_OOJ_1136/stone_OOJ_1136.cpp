#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, n, r, cnt = 0;
    scanf("%d %d", &a, &b);


    for (int i = a; i <= b; i++) {
        n = i;
        r = 0;

        while (n != 0) {
            r = r * 10 + n % 10;
            n /= 10;
        }

        if (r == i) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
