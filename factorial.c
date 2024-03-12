#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of a number is :%d",fact);
}
