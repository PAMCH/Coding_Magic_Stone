#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, m, k, x;
	int i, j, check[1001] = { 0 }, cnt = 0;

	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);

	for (i = 1; i <= m; i++) {
		scanf("%d", &x);

		for (j = x - k; j <= x + k; j++) {
			if (j >= 1 && j <= n) {
				check[j] = 1;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		if (check[i] == 0) {
			cnt++;
			for (j = 1; j <= i + k * 2 && j <= n; j++) {
				check[j] = 1;
			}
		}
	}

	printf("%d\n", cnt);

	return 0;
}