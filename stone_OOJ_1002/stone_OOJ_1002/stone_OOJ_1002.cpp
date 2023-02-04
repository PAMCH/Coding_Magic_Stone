#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
입력으로 주어지는 한 개의 양의 정수 N(2≤N≤100)에 대하여 구구단을 출력하는 프로그램을 작성하여라.
입력형식
첫째 줄에 단수 2 이상 100 이하인 한 개의 양의 정수 N이 주어진다.
출력형식
주어진 N에 대한 구구단을 ‘출력의 예’와 같은 형식으로 각 줄에 출력하여라.
입출력 예제
2

2*1=2
2*2=4
2*3=6
2*4=8
2*5=10
2*6=12
2*7=14
2*8=16
2*9=18
2*1=2
2*2=4
2*3=6
2*4=8
2*5=10
2*6=12
2*7=14
2*8=16
2*9=18
*/

int main()
{
    int a;

    scanf("%d", &a);

    printf("%d*1=%d\n", a, a * 1);
    printf("%d*2=%d\n", a, a * 2);
    printf("%d*3=%d\n", a, a * 3);
    printf("%d*4=%d\n", a, a * 4);
    printf("%d*5=%d\n", a, a * 5);
    printf("%d*6=%d\n", a, a * 6);
    printf("%d*7=%d\n", a, a * 7);
    printf("%d*8=%d\n", a, a * 8);
    printf("%d*9=%d\n", a, a * 9);

    return 0;
}