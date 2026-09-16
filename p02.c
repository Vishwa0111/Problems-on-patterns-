#include<stdio.h>
void main()
{
    int row,j,i,k;

    printf("Enter No of row's: \n");
    scanf("%d",&row);

    for(i=0;i<row;i++)
        {
            for(j=row-i-1;j>0;j--)
                {
                    printf(" ");
                }
            for(k=0;k<2*i+1;k++)
                {
                    printf("*");
                }
                printf("\n");
        }

          for(i=row-2;i>=0;i--)
        {
            for(j=row-i-1;j>0;j--)
                {
                    printf(" ");
                }
            for(k=0;k<2*i+1;k++)
                {
                    printf("*");
                }
                printf("\n");
        }    
}

