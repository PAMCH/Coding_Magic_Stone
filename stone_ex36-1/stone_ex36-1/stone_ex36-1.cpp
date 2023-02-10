#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int c[101] = { 0 }, i, j, cnt = 0;

	for (i = 2; i <= 100; i++) {
		if (c[i] == 0) {
			printf("%d ", i);
			cnt++;

			if (cnt % 5 == 0) {
				printf("\n");
			}

			for (j = i * i; j <= 100; j += i) {
				c[j] = 1;
			}
		}
	}

	return 0;
}