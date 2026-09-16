#include<stdio.h>
void main()
{
    int i,j,row=6;

    printf("Enter row : \n");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("%d ",i*j);
                }
            printf("\n");
        }
}
