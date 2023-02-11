#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, arr[81];
	int i, prev, cnt = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	prev = arr[1];

	for (i = 2; i <= n; i++) {
		if (prev != arr[i]) {
			cnt++, prev = arr[i];
		}
	}

	printf("%d\n", cnt);

	return 0;
}