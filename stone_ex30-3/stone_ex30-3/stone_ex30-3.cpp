#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[51], n = 0;
	int i, j, k, cnt;

	for (i = 2; i <= 50; i++) {
		cnt = 0;
		k = sqrt(i);
		for (j = 2; j <= k; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt == 0) {
			a[++n] = i;
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}