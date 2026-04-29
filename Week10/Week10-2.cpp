// Week10-2.cpp
// Selection Sort 選擇排序法

#include <stdio.h>

int main()
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // 先印原始陣列
    for (int k = 0; k < 10; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");

    // Selection Sort：由小到大
    for (int i = 0; i < 10; i++) {          // 左邊
        for (int j = i + 1; j < 10; j++) {  // 右邊（從 i+1 開始）

            if (a[i] > a[j]) { // 左邊太大，就交換

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 再印排序後陣列
    for (int k = 0; k < 10; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");

    return 0;
}
