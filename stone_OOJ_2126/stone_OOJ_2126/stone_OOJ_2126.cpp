#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, c, s, e;
	int i, j, check[100] = { 0 }, sum = 0;

	scanf("%d %d %d", &a, &b, &c);

	for (i = 1; i <= 3; i++) {
		scanf("%d %d", &s, &e);

		for (j = s; j <= e - 1; j++) {
			check[j]++;
		}
	}

	for (i = 1; i <= 99; i++) {
		if (check[i] == 1) {
			sum += a;
		}
		else if (check[i] == 2) {
			sum += (b * 2);
		}
		else if (check[i] == 3) {
			sum += (c * 3);
		}
	}

	printf("%d\n", sum);

	return 0;
}