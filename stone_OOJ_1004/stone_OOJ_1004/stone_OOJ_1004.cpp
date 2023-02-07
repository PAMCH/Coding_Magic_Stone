#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, sum = 0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (i % 2 == 1) {
            sum += (i * i);
        }
        else {
            sum -= (i * i);
        }
    }

    printf("%d", sum);

    return 0;
}
