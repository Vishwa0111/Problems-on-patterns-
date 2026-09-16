#include<stdio.h>
void main()
{
    int i,j,row;

    printf("Enter the row : \n");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
        {
            for(j=1;j<=i;j++)
                {
                    if(i%2!=0)
                    printf("%d",2*j-1);
                    else
                        printf("%d",2*j);

                }
            printf("\n");
        }
}
