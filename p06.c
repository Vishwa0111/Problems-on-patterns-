#include<stdio.h>
void main()
{
    int i,j,row;

    printf("Enter row's\n");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
        {
            for(j=0;j<i;j++)
                {
                    if(j%2==0)
                    {
                        printf("1");
                    }
                    else
                        printf("0");
                }
            printf("\n");
        }
}
