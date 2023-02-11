#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, c, res;
	char op1, op2;

	scanf("%d %c %d %c %d", &a, &op1, &b, &op2, &c);

	if (op1 == '+') {
		res = a + b;
	}
	else if (op1 == '-') {
		res = a - b;
	}
	else if (op1 == '*') {
		res = a * b;
	}
	else {
		res = a / b;
	}

	if (op2 == '+') {
		res += c;
	}
	else if (op2 == '-') {
		res -= c;
	}
	else if (op2 == '*') {
		res *= c;
	}
	else {
		res /= c;
	}

	printf("%d\n", res);

	return 0;
}