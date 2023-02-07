#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a = 0, cnt = 0;

    while (a < 99) {
        a += 3;
        printf("%d ", a);
        cnt++;
        if (cnt % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
