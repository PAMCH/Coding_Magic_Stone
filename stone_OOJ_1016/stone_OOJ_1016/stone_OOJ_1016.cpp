#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a % 2 == 0 || b % 2 == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
