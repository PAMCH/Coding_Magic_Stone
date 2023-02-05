#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if ((a + b) > 0) {
		printf("Natural Number\n");
	}
	else {
		printf("0 or Negative Number\n");
	}

	return 0;
}