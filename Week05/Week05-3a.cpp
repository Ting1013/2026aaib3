// Week05-3a.cpp
//SOIT106_ADVANCE_003

#include <stdio.h>

int main()
{
    int a[10];
    int N = 10;  // 預設最多10個

    // 輸入資料
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if (a[i] == 0) {  // 如果輸入0就停止
            N = i;        // 記錄目前位置
            break;        // 跳出迴圈
        }
    }

    // 反向輸出
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
