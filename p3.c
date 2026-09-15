#include<stdio.h>
void main()
{
    int i,j,k,row;
    
    printf("Enter rows : \n");
    scanf("%d",&row);

    for(i=0;i<row-1;i++)
        {
            for(j=0;j<i;j++)
                {
                    printf(" ");
                }
            for(k=row-i-1;k>0;k--)
                {
                    printf("* ");
                }
            printf("\n");
        }
        for(i=2;i<row;i++)
        {
            for(j=row-1;j>i;j--)
                {
                    printf(" ");
                }
            for(k=0;k<i;k++)
                {
                    printf("* ");
                }
            printf("\n");
        }
}
