#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int i, a, even = 0, odd = 0;
	scanf("%d", &a);
	int n[10000];

	for (i = 0; i < a; i++) {
		scanf("%d", &n[i]);
	}

	for (i = 0; i < a; i++) {
		if (n[i] % 2 == 0) {
			even += n[i];
		}
		else {
			odd += n[i];
		}
	}

	printf("%d %d\n", even, odd);

	return 0;
}