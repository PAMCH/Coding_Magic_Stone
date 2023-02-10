#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, arr1[101], arr2[101];
	int i, j, temp;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &arr1[i]);
	}
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr2[i]);
	}

	for (i = 1; i <= n - 1; i++) {
		for (j = i + 1; j <= n; j++) {
			if (arr1[i] > arr1[j]) {
				temp = arr1[i], arr1[i] = arr1[j], arr1[j] = temp;
			}
		}
	}
	for (i = 1; i <= n - 1; i++) {
		for (j = i + 1; j <= n; j++) {
			if (arr2[i] > arr2[j]) {
				temp = arr2[i], arr2[i] = arr2[j], arr2[j] = temp;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		if (arr1[i] > arr2[i]) {
			break;
		}
	}

	if (i == n + 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}