#include<stdio.h>
int main()
{

    int a,b;
    printf("enter the 2 numbers\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap\n a=%d,b=%d",a,b);
}
