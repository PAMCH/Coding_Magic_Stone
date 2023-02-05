#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;

    scanf("%d", &a);

    for (int i = 1; i <= a; i += 2) {
        printf("%d ", i);
    }

    return 0;
}