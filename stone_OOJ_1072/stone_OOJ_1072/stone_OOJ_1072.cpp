#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, s[11], t[11] = { 0 };
	int i, sum = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &s[i], &t[i]);
		sum += s[i] * (t[i] - t[i - 1]);
	}

	printf("%d\n", sum);

	return 0;
}