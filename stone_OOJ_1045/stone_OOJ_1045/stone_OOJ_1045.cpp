#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int n, x[10001] = { 0 };
    int i, val, max, k = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &val); 
        x[val]++;
    }

    max = x[1], k = 1;
    
    for (i = 1; i <= 10000; i++) {
        if (max < x[i]) {
            max = x[i];
            k = i;
        }
    }

    printf("%d\n", k);
    
    return 0;
}
