#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, i, arr[100000], max;

	scanf("%d", &n);

	arr[1] = arr[2] = max = 1;

	for (i = 3; i <= n; i++) {
		if (i % 2) {
			arr[i] = arr[i / 2] + arr[i / 2 + 1];
		}
		else {
			arr[i] = arr[i / 2];
		}

		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%d\n", max);

	return 0;
}