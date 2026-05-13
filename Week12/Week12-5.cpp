/// Week12-5.cpp
/// 用輾轉相除法找最大公因數

#include <stdio.h>

int gcd(int a, int b)
{
    printf("現在 a: %d b: %d\n", a, b);

    if (a == 0) return b;

    if (b == 0) return a;

    return gcd(b, a % b);
}

int main()
{
    printf("請輸入兩個數字：");

    int a, b;

    scanf("%d%d", &a, &b);

    printf("答案：%d\n", gcd(a, b));

    return 0;
}
