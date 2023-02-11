#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int arr[11];
	int i, prev = -1, cnt, max = 0, k;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= 10; i++) {
		if (prev == arr[i]) {
			cnt++;
		}
		else {
			prev = arr[i], cnt = 1;
		}

		if (max < cnt) {
			max = cnt, k = prev;
		}


	}

	printf("%d\n%d\n", k, max);

	return 0;
}