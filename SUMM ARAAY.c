#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("ENTER THE ARRAY ELEMENTS\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
      for(i=0;i<5;i++)
    {
        sum=sum+a[i];

    }
    printf("SUM:%d\n",sum);

}
