#include<stdio.h>
int main()
{
    int n,i,count;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        count=count++;
    }
    }
    if(count==2)
    {
        printf("not a prime number\n");
    }
    else
    {
     printf("prime number\n");
    }
}
