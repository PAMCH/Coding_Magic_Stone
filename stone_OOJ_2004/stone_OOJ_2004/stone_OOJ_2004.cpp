#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a <= b) {
        printf("2\n");
    }
    else if ((a * 2) % b == 0) {
        printf("%d\n", (a * 2) / b);
    }
    else {
        printf("%d\n", (a * 2) / b + 1);
    }

    return 0;
}