#include<stdio.h>
int main()
{
    int n,r,sum;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    printf("%d",sum);
}
