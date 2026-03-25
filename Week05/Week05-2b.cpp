// Week05-2b.cpp
//(SOIT106_BASE_009)

#include <stdio.h>

int main()
{
    int a[3];  // 皚3计

    int big = -9999999; // 砞计
    int small = 9999999; // 砞计

    // 弄3计т程程
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);

        if (a[i] < small) small = a[i]; // т程
        if (a[i] > big)   big = a[i];   // т程
    }

    // 块挡狦程 程
    printf("%d\n", big-small);

    return 0;
}
