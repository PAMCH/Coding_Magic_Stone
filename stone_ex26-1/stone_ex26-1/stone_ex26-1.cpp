#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, n, cnt, cnt2=0;

	for (int i = 2; i <= 100; i++) {
		cnt = 0;
		n = sqrt(i);
		for (int j = 2; j <= n; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == 0) {
			printf("%d ", i);
			cnt2++;
		}
		if (cnt2 == 5) {
			printf("\n");
			cnt2 = 0;
		}
	}
	
	
	return 0;
}