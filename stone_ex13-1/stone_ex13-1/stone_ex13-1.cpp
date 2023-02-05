#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if ((a + b) % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }


    return 0;
}