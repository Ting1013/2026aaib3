// Week14-3a.cpp
// SOIT106_ADVANCE_004

#include <stdio.h>

int main()
{
    char s[20];

    scanf("%s", s);

    for (int i=0; s[i] != 0; i++) {

        // 大寫轉小寫
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';

        // 小寫轉大寫
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    }

    printf("%s\n", s);

    return 0;
}
