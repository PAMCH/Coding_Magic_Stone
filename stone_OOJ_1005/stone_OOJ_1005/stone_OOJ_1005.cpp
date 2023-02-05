#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, sum = 0;

    scanf("%d", &a);

    for (int i = 1; i <= 100; i++) {
        sum += i * a;
   }

    printf("%d\n", sum);

    return 0;
}