#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int len, m, s, e;
	int i, n;

	scanf("%d %d", &len, &m);

	n = len + 1;

	for (i = 1; i <= m; i++) {
		scanf("%d %d", &s, &e);
		n -= (e - s + 1);
	}

	printf("%d\n", n);

	return 0;
}