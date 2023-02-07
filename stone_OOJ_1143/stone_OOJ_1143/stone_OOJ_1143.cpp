#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a, i;

    scanf("%d", &a);

    // for (i = 1; i * i < a; i++);
    //printf("%d", i);

    printf("%d\n", int(sqrt(a)));

    return 0;
}
