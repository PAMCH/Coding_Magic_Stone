#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, i, cnt = 0;
	char arr[26], prev = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf(" %c", &arr[i]);
	}

	prev = 0;

	for (i = 1; i <= n; i++) {
		if (prev != arr[i]) {
			cnt++, prev = arr[i];
		}
	}

	printf("%d\n", cnt + 1);

	return 0;
}