#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a[11] = { 0, 7, -5, 4, -99, 45, 11, 0, 8, 50, 77 };
    int i, min, max;

    min = max = a[1];

    for (i = 2; i <= 10; i++) {
        if (max < a[i]) {
            max = a[i];
        }
        else if (min > a[i]) {
            min = a[i];
        }
    }

    printf("%d\n%d\n", max, min);


    return 0;
}
