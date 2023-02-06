#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, sum = 0;

	scanf("%d", &a);

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= i; j++) {
			sum += (i+j);
		}
	}

	printf("%d", sum);

	return 0;
}