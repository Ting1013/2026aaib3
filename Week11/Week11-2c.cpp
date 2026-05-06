// Week11-2c.cpp
// (SOIT106_ADVANCE_001) 反序數字 + 相加

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0;   // 反轉後的數字
    int N2 = N;    // 保留原本的數字

    // 剝皮法
    while (N > 0) {
        ans = ans * 10 + N % 10; // 反轉
        N = N / 10;              // 去尾巴
    }

    // 輸出
    printf("%d+%d=%d\n", N2, ans, N2 + ans);

    return 0;
}
