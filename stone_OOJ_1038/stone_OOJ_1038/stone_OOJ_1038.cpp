#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int num;
	int i, check[42] = { 0 }, cnt = 0;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &num);
		check[num % 42] = 1;
	}
	for (i = 0; i <= 41; i++) {
		cnt += check[i];
	}

	printf("%d\n", cnt);

	return 0;
}