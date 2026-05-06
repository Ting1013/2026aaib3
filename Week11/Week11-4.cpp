// Week11-4.cpp
// (SOIT108_Advance_001)§PÂ_¥­¤è¼Æ

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0;

    for (int i = 1; i <= 1000; i++) {

        if (i * i == N) {
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}
