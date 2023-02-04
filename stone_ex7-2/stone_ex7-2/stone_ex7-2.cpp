#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	double a, b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("%.2lf+%.2lf=%.2lf\n", a, b, a + b);
	printf("%.2lf-%.2lf=%.2lf\n", a, b, a - b);
	printf("%.2lf*%.2lf=%.2lf\n", a, b, a * b);
	printf("%.2lf/%.2lf=%.2lf\n", a, b, a / b);

	return 0;
}