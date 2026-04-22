// Week09-5.cpp
// 想更了解大到小排序

#include <stdio.h>

int main()
{
    // 陣列有 10 個數字
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 97};

    // 先印一次
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n");

    // 只做一輪比較
    for (int i = 0; i < 10 - 1; i++) {

        // 希望左大右小
        if (a[i] < a[i + 1]) {

            int temp = a[i]; // 暫存左邊
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    // 再印一次
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
