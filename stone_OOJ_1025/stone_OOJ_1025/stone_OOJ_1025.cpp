#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, arr[11];
	int i, j, temp;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= 9; i++) {
		for (j = i + 1; j <= 10; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i], arr[i] = arr[j], arr[j] = temp;
			}
		}
	}

	printf("%d\n", arr[3]);

	return 0;
}