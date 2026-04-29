// Week10-5.cpp
// (SOIT106_ADVANCE_001)

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0;
    int N2 = N; // 保留原本的數字

    while (N > 0) {

        ans = ans * 10 + N % 10; // 數字反轉

        N = N / 10;
    }

    printf("%d+%d=%d\n", N2, ans, N2 + ans);

    return 0;
}
