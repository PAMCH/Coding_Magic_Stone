#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, k, arr[100001];
	int i, sum[100001] = { 0 }, s, e, max;

	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		sum[i] = sum[i - 1] + arr[i];
	}

	max = sum[k];

	for (i = 1; i <= n - k + 1; i++) {
		if (max < sum[i + k - 1] - sum[i - 1]) {
			max = sum[i + k - 1] - sum[i - 1];
		}
	}
	printf("%d\n", max);

	return 0;
}