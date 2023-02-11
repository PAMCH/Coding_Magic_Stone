#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int arr[9];
	int i, as, ds;

	for (i = 1; i <= 8; i++) {
		scanf("%d", &arr[i]);
	}

	for (as = 1; as <= 7 && arr[as] < arr[as + 1]; as++);
	for (ds = 1; ds <= 7 && arr[ds] > arr[ds + 1]; ds++);

	if (as == 8) {
		printf("ascending\n");
	}
	else if (ds == 8) {
		printf("descending\n");
	}
	else {
		printf("mixed\n");
	}

	return 0;
}