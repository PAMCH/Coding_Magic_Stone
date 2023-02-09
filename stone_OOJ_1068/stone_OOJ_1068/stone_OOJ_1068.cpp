#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int s1, s2, s3, s4;
    int i, k, max = 0;

    for (i = 1; i <= 5; i++) {
        scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

        if (max < s1 + s2 + s3 + s4) {
            max = s1 + s2 + s3 + s4;
            k = i;
        }
    }

    printf("%d %d\n", k, max);

    return 0;
}
