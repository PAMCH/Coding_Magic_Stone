#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, arr[101];
    int i, j, temp;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 1; i <= n-1; i++) {
        for (j = i + 1; j <= n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i], arr[i] = arr[j], arr[j] = temp;
            }
        }
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
