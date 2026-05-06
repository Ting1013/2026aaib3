// Week11-6a.cpp
// (SOIT108_Advance_002B)三數組合（由大到小）

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // 排序（由大到小）
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }

    if (a < c) {
        int t = a;
        a = c;
        c = t;
    }

    if (b < c) {
        int t = b;
        b = c;
        c = t;
    }

    // 組成三位數
    printf("%d", a * 100 + b * 10 + c + 1);

    return 0;
}
