#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, c, arr[2001];
	int i, j, ok = 0;

	scanf("%d", &c);
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= n - 1 && !ok; i++) {
		for (j = i + 1; j <= n && !ok; j++) {
			if (arr[i] + arr[j] == c) {
				printf("%d %d\n", i, j);
				ok = 1;
			}
		}
	}

	return 0;
}