#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	//int i, j;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("#");
		}
		printf("\n");
	}

	return 0;
}