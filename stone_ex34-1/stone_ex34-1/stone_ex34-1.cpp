#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int arr[11] = { 0,1,2,3,4,5,6,7,8,9,10 }, i, j, key;

	for (i = 2; i <= 10; i++) {
		key = arr[i];
		for (j = i - 1; j >= 1 && arr[j] < key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}

	for (i = 1; i <= 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}