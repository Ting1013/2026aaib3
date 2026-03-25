//Week05-3b.cpp
//(SOIT106_ADVANCE_012)

#include <stdio.h>

int main()
{
    int a[10];
    int N = 10;

    // 輸入數列（遇到0停止）
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if (a[i] == 0) {
            N = i;      // 記錄有效長度
            break;      // 結束輸入
        }
    }

    int now;
    scanf("%d", &now);  // 要找的數字

    int ans = 0;        // 計數器

    // 計算出現次數
    for (int i = 0; i < N; i++) {
        if (a[i] == now)
            ans++;
    }

    // 輸出結果
    printf("%d\n", ans);

    return 0;
}

