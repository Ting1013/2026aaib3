// Week12-2.cpp
// µ´¹ï­È¨ç¦¡

#include <stdio.h>

int f(int n)
{
    if (n < 0)
        return -n;

    return n;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("[%d]", f(n));

    return 0;
}
