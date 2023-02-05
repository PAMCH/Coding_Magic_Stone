#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, even = 0, odd = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			even += i;
		}
		else {
			odd += i;
		}
	}

	printf("%d\n", even);
	printf("%d\n", odd);

	return 0;
}