#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,p,i,sum=0,temp;
    printf("enter the no of digits\n");
    scanf("%d",&n);
    printf("enter the no\n");
    scanf("%d",&x);
    temp=x;
    for(i=0;i<n;i++)
    {
        p=x%10;
        sum=sum+pow(p,n);
        x=x/10;
    }
    if(temp==sum)
    printf("it is armstrong no\n");
    else 
    printf("it is not armstrong no\n");
    return 0;
}
