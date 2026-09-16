#include<stdio.h>
void main()
{
    int i,j,k,row;

    printf("Enter row : \n");
    scanf("%d",&row);

    for(i=1;i<row;i++)
        {
            for(j=row-i;j>0;j--)
                {
                    printf(" ");
                }
            for(k=1;k<=2*i-1;k++)
                {
                    printf("%d",k);
                }
            printf("\n");
        }
}
