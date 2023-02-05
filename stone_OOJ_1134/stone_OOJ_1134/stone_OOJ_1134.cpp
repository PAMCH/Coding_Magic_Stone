#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;

    scanf("%d", &a);

    /*
    int cnt = 0;

    for (int i = 1; i < a; i++) {
        if (i % 4 == 0) {
            cnt++;
        }
    }
    */

    /*
    for (int i = 4; i < a; i += 4) {
        cnt++;
    }
    */

    printf("%d", (a-1)/4);

    return 0;
}