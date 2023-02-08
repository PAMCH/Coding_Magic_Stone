#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[] = { 5, 7, 13, 11, 6, 10, 45, 11, 4, 9 }, sum = 0;

	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			sum += a[i];
		}
	}

	printf("%d\n", sum);

	return 0;
}