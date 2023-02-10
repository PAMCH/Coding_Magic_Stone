#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int c[101] = { 0 }, i, j, cnt = 0;

	for (i = 2; i <= 100; i++) {
		if (c[i] == 0) {
			for (j = i * i; j <= 100; j += i) {
				c[j] = i;
			}
		}
	}

	for (i = 2; i <= 98; i++) {
		if (c[i] == 0 && c[i + 2] == 0) {
			printf("%d %d\n", i, i + 2);
		}
	}

	return 0;
}