#include<stdio.h>
int main()
{
    int mat[2][2],i,j,r,c,trans[2][2];
    printf("enter the rows and columnos\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }

    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }
    printf("traspose matrix:\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",trans[i][j]);
        }
        printf("\n");
    }
}
