#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int arr[11] = { 0,10,20,30,40,50,60,70,80,90,100 };
	int t, s, e, i, sum[11] = { 0 };

	for (i = 1; i <= 10; i++) {
		sum[i] = sum[i - 1] + arr[i];
	}

	scanf("%d", &t);

	for (i = 1; i <= t; i++) {
		scanf("%d %d", &s, &e);
		printf("%d\n", sum[e] - sum[s - 1]);
	}

	return 0;
}