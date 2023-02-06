#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i-1; j++) {
			printf(" ");
		}

		for (int j = i; j <= 5; j++) {
			printf("%d", j);
		}

		printf("\n");
	}

	return 0;
}