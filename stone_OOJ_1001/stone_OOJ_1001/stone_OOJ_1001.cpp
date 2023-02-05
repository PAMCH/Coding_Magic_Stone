#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf(">\n");
    }
    if (a < b) {
        printf("<\n");
    }
    if (a == b) {
        printf("=\n");
    }
    return 0;
}