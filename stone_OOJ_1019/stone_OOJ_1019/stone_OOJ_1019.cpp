#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, even = 0, odd = 0;
	scanf("%d", &a);

	int n[100];

	for (int i = 0; i < a; i++) {
		scanf("%d", &n[i]);
		if (n[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}

	printf("%d\n%d\n", even, odd);


	return 0;
}