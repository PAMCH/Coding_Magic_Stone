#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <=5-i; j++) {
			printf(" ");
		}

		for (int j = i; j <= i*3-2; j++) {
			printf("%c", j + 64);
		}

		printf("\n");
	}

	return 0;
}