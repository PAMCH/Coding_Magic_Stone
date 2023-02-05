#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("even\n");
    }
    if (a % 2 != 0) {
        printf("odd\n");
    }

    return 0;
}
