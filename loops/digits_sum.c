#include<stdio.h>
int main()
{
    int n,count=0,temp,sum=0,p;
    printf("enter the number=");
    scanf("%d",&n);
    temp=n;
    for(int i=temp;i>0;)
    {
       p=temp%10;
       sum=sum+p;
       temp=temp/10;
       i=temp;
    }
    printf("sum=%d",sum);
    return 0;

}