#include <stdio.h>

int main()
{
    int i,j,k,row=6;

    for(i=0;i<row;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }

        for(k=row-1;k>i;k--)
        {
            printf("* ");
        }

        printf("\n");
    }

    for(i=row-2;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }

        for(k=row-1;k>i;k--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
