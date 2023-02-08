#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, day = 0, ans = 0;

	while (true) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}

		day++;

		if (a + b > 8 && ans == 0) {
			ans = day;
			// break; 입력 중간에 끊겨가지고 조건을 바꿈
		}
	}

	printf("%d\n", ans);

	return 0;
}