#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n, s1, s2, s3;
	scanf("%d", &n);

	s1 = (n + 1) * n / 2;
	s2 = n * n;
	s3 = n * n + n * (n - 1) / 2;

	printf("%d\n", s1 + s2 + s3);

	return 0;
}