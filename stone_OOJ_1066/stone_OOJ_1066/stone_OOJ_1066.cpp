#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n;
	int i, c[31] = { 0 };

	for (i = 1; i <= 28; i++) {
		scanf("%d", &n);
		c[n] = 1;
	}

	for (i = 1; i <= 30; i++) {
		if (c[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}