#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b = 0, sum = 0;

    scanf("%d", &a);

    /*
    for (int i = 1; i <= a; i++) {

        b = 0;

        for (int j = 1; j <= i * 2 - 1; j += 2) {
            b += j;
        }

        sum += b;
    }
    */

    for (int i = 1; i <= a; i++) {
        /*
        b += (i * 2 - 1);
        sum += b;
        */
        sum += i * i;
    }

    printf("%d", sum);

    return 0;
}
