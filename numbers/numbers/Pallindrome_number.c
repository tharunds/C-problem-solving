#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,count=0,temp,p;
    printf("enter the no=");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    temp=n;
    int i=0;
    while(temp>0)
    {
        p=temp%10;
        sum=sum+(p*pow(10,count-1-i));
        temp=temp/10;
        i++;
    }
    if(sum==n)
    printf("pallindrome");
    else
    printf("not pallindrome");
    return 0;
}