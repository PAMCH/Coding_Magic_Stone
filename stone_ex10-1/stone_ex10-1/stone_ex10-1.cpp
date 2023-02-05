#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    /*
    int a, b, c, d, e;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    printf("%d\n", a);
    printf("%d\n", a + b);
    printf("%d\n", a + b + c);
    printf("%d\n", a + b + c + d);
    printf("%d\n", a + b + c + d + e);
    */

    int a, sum = 0;

    scanf("%d", &a);
    sum += a;
    printf("%d\n", sum);

    scanf("%d", &a);
    sum += a;
    printf("%d\n", sum);

    scanf("%d", &a);
    sum += a;
    printf("%d\n", sum);

    scanf("%d", &a);
    sum += a;
    printf("%d\n", sum);

    scanf("%d", &a);
    sum += a;
    printf("%d\n", sum);

    return 0;
}