#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		printf("%d\n", a * 1000 + 10000);
	}
	else if (a == b || a==c) {
		printf("%d\n", a * 100 + 1000);
	}
	else if (c == b) {
		printf("%d\n", b * 100 + 1000);
	}
	else {
		if (a > b && a > c) {
			printf("%d", a * 100);
		}
		else if (a < b && b >c) {
			printf("%d", b * 100);
		}
		else {
			printf("%d", c * 100);
		}
	}
}