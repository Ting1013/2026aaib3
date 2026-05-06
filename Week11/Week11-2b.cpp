// Week11-2b.cpp
// (SOIT106_ADVANCE_001)反序數字（用變數存）

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0;

    // 剝皮法
    while (N > 0) {
        ans = ans * 10 + N % 10; // 存反轉
        N = N / 10;
    }

    // 最後才印
    printf("%d\n", ans);

    return 0;
}
