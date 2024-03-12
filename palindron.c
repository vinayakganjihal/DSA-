#include<stdio.h>
int main()
{
    int n,r,temp,sum;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
        printf("palindron number\n");
    else
        printf("not a palindron number\n");
}
