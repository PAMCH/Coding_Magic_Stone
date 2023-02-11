#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int m, t, u, f, d;
	char arr[100001];
	int i, sum = 0;

	scanf("%d %d %d %d %d", &m, &t, &u, &f, &d);
	for (i = 1; i <= t; i++) {
		scanf(" %c", &arr[i]);
	}

	for (i = 1; i <= t; i++) {
		if (arr[i] == 'u' || arr[i] == 'd') {
			sum += (u + d);
		}
		else {
			sum += f * 2;
		}

		if (sum > m) {
			break;
		}
	}

	printf("%d\n", i - 1);

	return 0;
}