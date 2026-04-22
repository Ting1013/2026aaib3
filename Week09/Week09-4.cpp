// Week09-4.cpp
// 要交換兩個變數的數字

#include <stdio.h>

int main()
{
    int a = 99, b = 34;

    printf("開始 a: %d b: %d\n", a, b);

    int temp = a; // 第3個變數先暫存 a

    a = b;        // a 接收 b 的值
    b = temp;     // b 接收原本 a 的值

    printf("交換後 a: %d b: %d\n", a, b);

    return 0;
}
