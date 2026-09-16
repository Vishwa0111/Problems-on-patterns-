#include <stdio.h>

void main()
{
    int i, j, k, n = 5;
    int num, diff;

    for(i = 1; i <= n; i++)
    {
        num = i;
        diff = n - 1;

        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);

            num = num + diff;
            diff--;
        }

        printf("\n");
    }
}

