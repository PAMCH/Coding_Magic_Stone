#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, fac = 1;
	scanf("%d", &a);

	printf("%d!=(%d", a, fac);

	for (int i = 2; i <= a; i++) {
		fac *= i;
		printf("*%d", i);
	}

	printf(")=%d", fac);

	return 0;
}