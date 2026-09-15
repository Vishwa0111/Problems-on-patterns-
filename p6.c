#include<stdio.h>
void main()
{
    int i,j,k,row;

    printf("Enter rows : ");
    scanf("%d",&row);

    for(i=1;i<row;i++)
        {
            for(j=3;j<=2*i+1;j++)
                {
                    if(j%2!=0)
                    printf("%d",i);
                    else
                    {
                        printf("*");
                    }
                }
            printf("\n");
        }
        for(i=row;i>0;i--)
        {
            for(j=3;j<=2*i+1;j++)
                {
                    if(j%2!=0)
                    printf("%d",i);
                    else
                    {
                        printf("*");
                    }
                }
            printf("\n");
        }
}


