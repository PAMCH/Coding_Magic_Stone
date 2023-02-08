#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, sum = 0;

	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		if (a + b >= sum) {
			sum = a + b;
		}
	}

	printf("%d\n", sum); // 수정


	return 0;
}