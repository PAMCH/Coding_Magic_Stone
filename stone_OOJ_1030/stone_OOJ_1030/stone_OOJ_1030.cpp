#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, val;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		printf("%2d ", val);
		for (int j = 1; j <= val; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}