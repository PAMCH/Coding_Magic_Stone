#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, m, op, s, e;
	int i, j, check[501] = { 0 }, cnt;

	scanf("%d %d", &n, &m);

	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &op, &s, &e);
		
		if (op == 0) {
			for (j = s; j <= e; j++) {
				check[j] = 1 - check[j];
			}
		}
		else {
			cnt = 0;
			for (j = s; j <= e; j++) {
				cnt += check[j];
			}
			printf("%d\n", cnt);
		}
	}

	return 0;
}