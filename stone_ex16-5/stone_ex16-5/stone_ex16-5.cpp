#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, i, sum = 0;

	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}