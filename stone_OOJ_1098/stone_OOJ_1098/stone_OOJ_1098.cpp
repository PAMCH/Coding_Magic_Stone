#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, sum = 0;
	
	scanf("%d", &a);

	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			sum += i;
		}
	}

	printf("%d", sum);
}