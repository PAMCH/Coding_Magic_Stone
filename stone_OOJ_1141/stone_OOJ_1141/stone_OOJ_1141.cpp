#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, cnt, tcnt = 0;

	scanf("%d", &a);

	for (int i = 2; i <= a - 2; i++) {
		cnt = 0;
		b = sqrt(i);
		for (int j = 2; j <= b; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt == 0) {
			b = sqrt(i + 2);
			for (int j = 2; j <= b; j++) {
				if ((i + 2) % j == 0) {
					cnt++;
				}
			}

			if (cnt == 0) {
				printf("%d %d\n", i, i + 2);
				tcnt++;
			}
		}
	}

	printf("%d\n", tcnt);

	return 0;
}