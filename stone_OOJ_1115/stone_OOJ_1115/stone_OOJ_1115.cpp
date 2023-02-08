#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, n[51];
	int i, cnt = 0;

	scanf("%d %d", &a, &b);
	for (i = 1; i <= a; i++) {
		scanf("%d", &n[i]);
	}
	for (i = 1; i <= a; i++) {
		if (n[i] > 0 && n[b] <= n[i]) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}