#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", a + b + c);
	//printf("%.2lf\n", (double(a) + double(b) + double(c)) / 3);
	printf("%.2lf\n", double(a + b + c)/ 3);

	return 0;
}