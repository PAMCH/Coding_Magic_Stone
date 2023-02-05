#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a == 1 && b == 1) {
		printf("1\n");
	}
	else if (a == 1 || b == 1) {
		printf("2\n");
	}
	else {
		printf("3\n");
	}
}