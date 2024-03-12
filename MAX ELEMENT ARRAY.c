#include<stdio.h>
int main()
{
    int a[100],size,i,max,min;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("MAX:%d\n",max);
     min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("MIN:%d\n",min);
}
