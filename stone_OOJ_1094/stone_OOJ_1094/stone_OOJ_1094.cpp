#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, n[5];

	scanf("%d %d", &a, &b);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", n[i] - (a * b));
	}

	return 0;
}