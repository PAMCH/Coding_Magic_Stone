#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a;

	scanf("%d", &a);

	for (int i = a; i >= 1; i--) {
		printf("%d ", i);
	}
}