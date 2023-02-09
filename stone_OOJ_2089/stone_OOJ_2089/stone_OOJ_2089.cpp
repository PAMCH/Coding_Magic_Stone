#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n1, n2, n3;
    int i, j, k, arr[81] = { 0 }, max, v;

    scanf("%d %d %d", &n1, &n2, &n3);

    for (i = 1; i <= n1; i++) {
        for (j = 1; j <= n2; j++) {
            for (k = 1; k <= n3; k++) {
                arr[i + j + k]++;
            }
        }
    }

    max = arr[1], v = 1;

    for (i = 1; i <= n1 + n2 + n3; i++) {
        if (max < arr[i]) {
            max = arr[i];
            v = i;
        }
    }

    printf("%d\n", v);

    return 0;
}
