// Week05-2a.cpp
//(SOIT106_BASE_009)

#include <stdio.h>

int main()
{
    int a, b, c;

    /// 块俱计
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    /// 安砞 a 琌程籔程
    int big = a, small = a;

    /// т程
    if (b > big) big = b;
    if (c > big) big = c;

    /// т程
    if (b < small) small = b;
    if (c < small) small = c;

    /// 块程籔程
    printf("%d\n", big-small);

    return 0;
}
