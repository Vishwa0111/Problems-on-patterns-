#include<stdio.h>
void main()
{
    int i,j,k,row;

    printf("Enter no of rows : \n");
    scanf("%d",&row);

    for(i=0;i<row;i++)
        {
            for(j=row-i;j>0;j--)
                {
                    printf(" ");
                }
            for(k=0;k<=i;k++)
                {
                    printf("* ");
                }
            printf("\n");
        }
        for(i=row;i>=0;i--)
        {
            for(j=row-i;j>0;j--)
                {
                    printf(" ");
                }
            for(k=0;k<=i;k++)
                {
                    printf("* ");
                }
            printf("\n");
        }
}
