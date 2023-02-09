#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int arr[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
    int i, j, temp;

    for (i = 1; i <= 9; i++) {
        for (j = i+1; j <= 10; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i], arr[i] = arr[j], arr[j] = temp;
            }
        }
    }

    for (i = 1; i <= 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
