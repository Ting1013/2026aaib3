// Week06-4b.cpp SOIT107 Base_008

#include <stdio.h>

int main()
{
    int N;

    printf("Enter the number of values to be processed: ");

    scanf("%d", &N);

    int ans = 1;

    for (int i = 0; i < N; i++) {
    	printf("Enter a value: ");
        int now;

        scanf("%d", &now);

        ans = ans * now; // ²Ö­¼
    }

    printf("Product of the %d values is %d", N, ans);

    return 0;
}
