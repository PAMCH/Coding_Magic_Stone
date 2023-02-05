#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;

    scanf("%d", &a);

    if (a >= 1 && a <= 10) {
        printf("1 or more and 10 or less\n");
    }
    else {
        printf("less then 1 or greater then 10\n");
    }

    return 0;
}
