#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, n, r = 0;
    scanf("%d", &a);

    n = a;

    while (a != 0) {
        r = r * 10 + a % 10;
        a /= 10;
    }
    if (n == r) {
        printf("Palindrome Number\n");
    }
    else {
        printf("Normal Number");
    }

    return 0;
}
