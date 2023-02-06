#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a-1; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		for (int j = 1; j <= (a - 1) * 2 - (i * 2 - 1); j++) {
			printf(" ");
		}
		for (int j = i; j >= 1; j--) {
			printf("%d", j);
		}

		printf("\n");
	}
	
	for (int i = 1; i <= a; i++) {
		printf("%d", i % 10);
	}
	for (int i = a-1; i >= 1; i--) {
		printf("%d", i);
	}
	printf("\n");

	for (int i = a - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		for (int j = 1; j <= (a - 1) * 2 - (i * 2 - 1); j++) {
			printf(" ");
		}
		for (int j = i; j >= 1; j--) {
			printf("%d", j);
		}

		printf("\n");
	}

	return 0;
}