#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a = 0, cnt = 0;

    do {
        a += 3;
        printf("%d ", a);
        cnt++;
        if (cnt % 10 == 0) {
            printf("\n");
        }
    } while ( a < 99 );

    return 0;
}
