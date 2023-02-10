#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int arr[4], i, j, temp;

	for (i = 1; i <= 3; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= 2; i++) {
		for (j = i + 1; j <= 3; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i], arr[i] = arr[j], arr[j] = temp;
			}
		}
	}

	if (arr[3] - arr[2] == arr[2] - arr[1]) {
		printf("%d\n", arr[3] + arr[2] - arr[1]);
	}
	else if (arr[3] - arr[2] == (arr[2] - arr[1]) * 2) {
		printf("%d\n", (arr[3] + arr[2]) / 2);
	}
	else {
		printf("%d\n", (arr[2] + arr[1]) / 2);
	}

	return 0;
}