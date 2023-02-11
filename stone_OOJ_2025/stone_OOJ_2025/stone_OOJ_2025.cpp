#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, q, arr[50001], s, e;
	int i, sum[50001] = { 0 };

	scanf("%d %d", &n, &q);

	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		sum[i] = sum[i - 1] + arr[i];
	}

	for (i = 1; i <= q; i++) {
		scanf("%d %d", &s, &e);
		printf("%d\n", sum[e] - sum[s - 1]);
	}

	return 0;
}