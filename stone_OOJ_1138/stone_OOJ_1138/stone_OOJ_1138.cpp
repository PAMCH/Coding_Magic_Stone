#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a, b, cnt, pcnt = 0, min, sum = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        /*
        int k;
        k = sqrt(i); // i의 제곱근을 정수로 변환하여 할당
        if(k*k == i) // 정수 k의 제곱이 i와 같으면 완전 제곱수
        {
            sum += i;
            pcnt++;
            if(pcnt==1){
                min = i;
            }
        }

        */        
        
        cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt++; // i의 약수의 개수
            }
        }

        if (cnt % 2 == 1) { // 약수의 개수가 홀수개이면 완전제곱수
            sum += i; // 완전제곱수를 더함
            pcnt++; // 완전제곱수의 개수를 올림
            if (pcnt == 1) { // 첫번째 완전 제곱수를 구함
                min = i;
            }
        }
    }

    if (pcnt == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", sum);
        printf("%d\n", min);
    }

    return 0;
}
