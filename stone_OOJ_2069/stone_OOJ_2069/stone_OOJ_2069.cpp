#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, x, y, i, arr[101], cnt = 0, max = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		arr[i] = x + y;
	}

	for (i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			cnt++;
		}
		else {
			cnt = 0;
		}

		if (max < cnt) {
			max = cnt;
		}
	}

	printf("%d\n", max * 2);

	return 0;
}