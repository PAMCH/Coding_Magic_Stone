#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[6], b[] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", b[i] - a[i]);
	}
	

	return 0;
}