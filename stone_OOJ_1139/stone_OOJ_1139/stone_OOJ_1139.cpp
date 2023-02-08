#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;
	int x, cnt[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);

	x = a * b * c;
	while (x) {
		cnt[x % 10]++;
		x /= 10;
	}


	for (int i = 0; i < 10; i++) {
		printf("%d\n", cnt[i]);
	}
	return 0;
}