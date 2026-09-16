#include<stdio.h>
void main()
{
    int i,j,k,row;

    printf("Enter rows : \n");
    scanf("%d",&row);

    for(i=row;i>0;i--)
        {
            for(j=row;j>i;j--)
                {
                    printf(" ");
                }
            for(k=0;k<i*2-1;k++)
                {
                    printf("*");
                }
            printf("\n");
        }

    for(i=1;i<row;i++)
        {
            for(j=row-1;j>i;j--)
                {
                    printf(" ");
                }
            for(k=0;k<i*2+1;k++)
                {
                    printf("*");
                }
            printf("\n");
        }
}
