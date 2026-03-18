#include<stdio.h>
#include<math.h>
int main()
{
    int n,count,temp,digit,rev=0,sum=0;
    printf("enter the no=");
    scanf("%d",&n);
    count=floor(log10(n))+1;
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        sum=sum+pow(digit,count);
        temp=temp/10;
    }
    if((n==rev)&&(n==sum))
    {
        printf("Both");
    }
    else if(n==rev)
    {
        printf("Palindrome only");

    }
    else if(n==sum)
    {
        printf("Armstrong only");
    }
    else 
    {
        printf("none");
    }
    return 0;
}