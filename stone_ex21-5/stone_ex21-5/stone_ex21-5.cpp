﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i*2-1;j++) {
			printf("#");
		}

		printf("\n");
	}

	return 0;
}