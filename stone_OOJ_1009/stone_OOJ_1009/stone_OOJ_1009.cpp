#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b, sum = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }

    //printf("%d\n", ((b + 1) / 2) * ((b + 1) / 2) - (a / 2) * (a / 2));

    printf("%d\n", sum);

    return 0;
}
