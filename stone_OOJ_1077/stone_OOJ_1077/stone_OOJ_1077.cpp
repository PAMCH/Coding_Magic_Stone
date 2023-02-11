#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, i, j;

	scanf("%d", &n);

	printf(" *");

	for (i = 1; i <= n; i++) {
		printf("%4d", i);
	}
	printf("\n");

	for (i = 1; i <= n; i++) {
		printf("%2d", i);
		for (j = 1; j <= n; j++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}

	return 0;
}