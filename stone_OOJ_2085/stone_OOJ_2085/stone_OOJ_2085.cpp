#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, sum = 0, day = 0, gold = 0;

    scanf("%d", &a);

    while (a > day) {
        gold++;
        day += gold;
        sum += (gold * gold);
    }

    sum -= (day - a) * gold;

    printf("%d\n", sum);

    return 0;
}
