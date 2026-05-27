// Week14-5a.cpp
// SOIT108_Advance_009B

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    // 如果是負數，先變正
    if (N < 0) N = -N;

    int ans = 0;

    while (N > 0) {

        ans = N % 10;

        N = N / 10;
    }

    printf("%d\n", ans);

    return 0;
}
