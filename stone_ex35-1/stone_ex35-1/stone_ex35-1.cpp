#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, i, arr[21] = { 0,1 };

	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	printf("%d\n", arr[n]);

	return 0;
}