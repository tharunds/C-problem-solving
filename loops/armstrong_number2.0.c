#include<stdio.h>
int main()
{
    int x,count=0,p,i,j,z=1,sum=0,temp;
    printf("enter the no\n");
    scanf("%d",&x);
    temp=x;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    temp=x;
    for(i=0;i<count;i++)
    {
        p=temp%10;
        for(j=0;j<count;j++)
        {
            z=z*p;
        }
        sum=sum+z;
        temp=temp/10;
        z=1;
        
    }
    if(x==sum)
    printf("it is armstrong no\n");
    else 
    printf("it is not armstrong no\n");
    return 0;
}