//Week04-4a
//(SOIT106_BASE_004)

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int ans;

    if (N <= 2000)
        ans = 100;
    else
        ans = 100 + ((N - 2000 + 499) / 500) * 5;

    printf("%d\n", ans);

    return 0;
}
