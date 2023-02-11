#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, i, j, min, r, c;
	scanf("%d", &n);

	min = n + n;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i * j >= n) {
				if (min > i + j || (min == i + j && r > i)) {
					min = i + j, r = i, c = j;
				}
			}
		}
	}

	printf("%d %d\n", r, c);

	return 0;
}