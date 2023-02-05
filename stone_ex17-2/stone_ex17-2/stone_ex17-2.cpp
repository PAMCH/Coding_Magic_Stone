#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);

    printf("%d", (a + b) * (b - a + 1) / 2);

    return 0;
}