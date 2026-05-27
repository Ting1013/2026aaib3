// Week14-3b.cpp
// SOIT106_ADVANCE_004

#include <stdio.h>

int main()
{
    char c;

    while (scanf("%c", &c) == 1)
    {

        // 大寫轉小寫
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';

        // 小寫轉大寫
        else if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';

        printf("%c", c);
    }

    return 0;
}
