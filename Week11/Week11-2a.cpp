// Week11-2a.cpp
// (SOIT106_ADVANCE_001)

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // 剝皮法
    while (N > 0) {
        printf("%d", N % 10); // 印出最後一位
        N = N / 10;           // 去掉最後一位
    }

    return 0;
}
