﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j <= i-1; j++) {
			printf(" ");
		}

		for (int j = 1; j <= 6 - i; j++) {
			printf("#");
		}

		printf("\n");
	}

	return 0;
}