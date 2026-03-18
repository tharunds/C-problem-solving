#include<stdio.h>
int main()
{
    int n,i,p,rev=0;
    printf("enter no=");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        p=i%10;
        rev=rev*10+p;
        i=i/10;
    }
    printf("%d",rev);
    return 0;
}