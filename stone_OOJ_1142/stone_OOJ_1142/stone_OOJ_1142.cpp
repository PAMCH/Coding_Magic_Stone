#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, cnt;

	scanf("%d", &a);

	for (int i = 4; i - 1 <= a; i *= 2) {
		cnt = 0;
		for (int j = 1; j <= i - 1; j++) {
			if ((i - 1) % j == 0) {
				cnt++;
			}
		}

		if (cnt == 2) {
			printf("%d\n", i - 1);
		}
	}

	return 0;
}