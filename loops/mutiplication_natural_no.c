#include<stdio.h>
int main()
{
    int n,p=1;
    printf("enter thr input\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0!=1");
        return 0;
        
    }
    for(int i=n;i>=2;i--)
    {
     if(i!=1)
     printf("%dx",i);
    else
    printf("%d",i);
     p=p*i;
    }
    printf("1");
    printf("=%d",p);
    return 0;

}