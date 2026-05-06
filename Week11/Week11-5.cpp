// Week11-5.cpp
// (SOIT108_Advance_002)璸衡借计计

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = 0;

    for (int i = a; i <= b; i++) {

        if (i < 2) continue; // 0,1 ぃ琌借计

        int bad = 0; // 安砞琌借计

        for (int k = 2; k < i; k++) {
            if (i % k == 0) {
                bad = 1; // ぃ琌借计
                break;
            }
        }

        if (bad == 0) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
