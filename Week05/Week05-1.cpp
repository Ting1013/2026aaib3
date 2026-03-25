/// Week05-1.cpp 練習陣列

#include <stdio.h>

int main()
{
    /// 宣告陣列，並給初始值
    int a[4] = {10, 20, 30, 40};

    /// 修改第3個元素（index從0開始）
    a[2] = 999;  // 原本是30 → 改成999

    /// 用for迴圈把陣列印出來
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);  // 印出每個元素
    }

    return 0;
}
