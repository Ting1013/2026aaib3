//Week04-4b
//(SOIT107_Base_002)

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int ans;

    if (N <= 1500)
        ans = 100;
    else
        ans = 100 + ((N - 1500 + 249) / 250) * 5;

    printf("%d", ans);

    return 0;
}
