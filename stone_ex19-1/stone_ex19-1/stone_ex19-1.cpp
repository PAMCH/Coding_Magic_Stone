#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, sum = 0;
	scanf("%d", &a);

	for (int i = 1; i <= a - 1; i++) {
		if(a % i == 0)
			sum += i;
	}

	if (sum == a) {
		printf("PERFECT\n");
	}
	else if (sum > a) {
		printf("ABUNDANT\n");
	}
	else {
		printf("DEFICIENT\n");
	}
}