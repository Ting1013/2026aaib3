// Week09-3
// (SOIT108_Advance_008) 10數排序，從大到小排好

#include <stdio.h>

int main()
{
    int a[10];

    // 輸入 10 個數字
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort：由大到小
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 9; i++) {
            if (a[i] < a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    // 輸出結果
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
