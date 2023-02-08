#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, cnt = 0;

	scanf("%d", &a);

	while (a != 1) {
		if (a % 2 == 0) {
			a /= 2;
			cnt++;
		}
		else {
			a = (a + 1) / 2;
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}