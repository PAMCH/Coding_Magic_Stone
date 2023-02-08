#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, c, cnt, sum = 0, pcnt = 0, n = -1;

	scanf("%d %d %d", &a, &b, &c);

	for (int i = a; i <= b; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt == 2) {
			sum += i;
			pcnt++;

			if (pcnt == c) {
				n = i;
			}
		}
	}
	printf("%d\n%d\n", sum, n);

	return 0;
}