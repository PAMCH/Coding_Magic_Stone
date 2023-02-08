#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, max;

	scanf("%d", &a);

	max = a;

	while (a != 1) {
		if (a % 2 == 0) {
			a /= 2;
		}
		else {
			a = (a * 3) + 1;
		}
		
		if (max < a) {
			max = a;
		}
	}

	printf("%d\n", max);

	return 0;
}