#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;

    scanf("%d", &a);

    /*
    1 = 1 
    2 = 1 + 1 * 6 = 7
    3 = 1 + (1*6) + (2*6) = 19
    4 = 1 + (1*6) + (2*6) + (3*6) = 37
    n = 1 + (1*6) + (2*6) + ~ + ((n-2)*6) + ((n-1)*6) 
    */

    printf("%d\n", ((1 + (a-1)) * ((a-1)) / 2) * 6 + 1);

    return 0;
}