#include<stdio.h>
int main()
{
    int n,max;
    printf("enter the no\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if((i%2!=0)&&(i%3!=0)&&(i%4!=0)&&(i%5!=0)&&(i%7!=0)&&(n%i==0))
        {
          max=i;
        }
    }
    printf("%d",max);
    return 0;
}