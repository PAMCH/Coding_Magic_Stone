#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, fac = 1;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		fac *= i;
	}

	printf("%d", fac);

	return 0;
}