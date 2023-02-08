#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int cnt=0;

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0 || i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
		cnt++;
		if (cnt % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}