#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	for (int i = a; i >= b; i--) {
		printf("%d ", i);
	}

	return 0;
}