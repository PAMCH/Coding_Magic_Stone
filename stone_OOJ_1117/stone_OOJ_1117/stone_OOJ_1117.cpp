#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, n[101];
	int i, sum = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 1; i <= b; i++) {
		scanf("%d", &n[i]);
	}

	for (i = 1; i <= b; i++) {
		sum += a;
		sum -= n[i];
	}

	printf("%d\n", sum + a);

	return 0;
}