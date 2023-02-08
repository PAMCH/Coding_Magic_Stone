#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
			sum += i;
		}
		if (sum > 50) {
			printf("\n");
			break;
		}
	}

	printf("%d\n", sum);

	return 0;
}