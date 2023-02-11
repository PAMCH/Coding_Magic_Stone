#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, sum = 0, k, i, j, cnt, pcnt = 0, arr[30001] = { 0 };

	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		k = sqrt(i);
		cnt = 0;
		
		for (j = 2; j <= k; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt == 0) {
			arr[i] = 1;
		}
	}

	for (i = 2; i <= n-1; i++) {
		for (j = i; j <= n; j++) {
			if (arr[i] == 1 && arr[j] == 1 && i + j == n) {
				printf("%d %d\n", i, j);
				pcnt++;
			}
		}
	}
	
	printf("%d\n", pcnt);
	return 0;
}