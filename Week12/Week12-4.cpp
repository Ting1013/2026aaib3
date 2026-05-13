/// week12-4.cpp
/// 程そ计 + だ

#include <stdio.h>

int main()
{
    printf("叫块ㄢ计(ex. 51 68): ");

    int a, b;
    scanf("%d%d", &a, &b);

    int ans = 1; // 程そ计匡

    // р 1 ~ a 刚Ω
    for (int i = 1; i <= a; i++) {

        // i 俱埃 a ㎝ b
        if (a % i == 0 && b % i == 0) {
            ans = i;
        }
    }

    printf("程そ计琌 %d\n", ans);

    printf("%d/%d だ跑Θ %d/%d\n",
           a, b, a / ans, b / ans);

    return 0;
}
