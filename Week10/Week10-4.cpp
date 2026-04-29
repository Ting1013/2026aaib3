// Week10-4.cpp A035
// 百數排序

#include <stdio.h>

int main()
{
    int a[100];

    // 輸入 100 個數字
    for (int i = 0; i < 100; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort：由小到大
    for (int i = 0; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {

            if (a[i] > a[j]) {

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 輸出：每 10 個換一行
    for (int i = 0; i < 100; i++) {
        printf(" %d", a[i]);

        if (i % 10 == 9 && i != 99) {
            printf("\n");
        }
    }

    return 0;
}
