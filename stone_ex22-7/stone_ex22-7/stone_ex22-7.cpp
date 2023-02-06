#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			printf(" ");
		}

		for (int j = 11-i*2; j <= 9;j++) {
			printf("%d", j);
		}

		printf("\n");
	}

	return 0;
}