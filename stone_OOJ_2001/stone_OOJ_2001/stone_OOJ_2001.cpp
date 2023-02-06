#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, cnt = 0;
	scanf("%d", &a);

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			for (int k = 1; k <= 10; k++) {
				if ((2 * i) + (3 * j) + (5 * k) == a) {
					printf("%d %d %d\n", i, j, k);
					cnt += 1;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}