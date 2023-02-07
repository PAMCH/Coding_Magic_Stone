#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, sum=0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        sum += (i * i);
    }

    printf("%d\n", sum);

    return 0;
}
