#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[] = { 4, 7, 6, 8, 11, -3, 8, 11, 5, 13 }, sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += a[i];
	}

	printf("%d\n", sum);

	return 0;
}