// Week09-6.cpp
// Bubble Sort 泡泡排序法（大到小）

#include <stdio.h>

int main()
{
    // 陣列有 10 個數字
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 97, 99};

    // 先印原始資料
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n");

    // Bubble Sort：重複很多輪
    for (int k = 0; k < 10 - 1; k++) {

        for (int i = 0; i < 10 - 1; i++) {

            // 希望左大右小
            if (a[i] < a[i + 1]) {

                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }

        // 每做完一輪就印一次
        for (int i = 0; i < 10; i++)
            printf("%d ", a[i]);

        printf("\n");
    }

    return 0;
}
