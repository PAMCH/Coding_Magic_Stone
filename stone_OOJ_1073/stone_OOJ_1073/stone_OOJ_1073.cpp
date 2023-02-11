#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, b;
	int i, check[10001] = { 0 };

	for (i = 1; i * i + i * (i - 1) / 2 <= 10000; i++) {
		check[i * i + i * (i - 1) / 2] = 1;
	}

	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		scanf("%d", &b);
		if (check[b] == 1) {
			printf("%d Y\n", b);
		}
		else {
			printf("%d N\n", b);
		}
	}

	return 0;
}