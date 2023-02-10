#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int s, n, a, b;
	int i, j, check[10001] = { 0 }, cnt = 0;

	scanf("%d %d", &s, &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		for (j = a; j <= s; j += b) {
			check[j] = 1;
		}
	}

	for (i = 1; i <= s; i++) {
		if (check[i] == 0) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}