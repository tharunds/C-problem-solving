#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("enter the no\n");
    scanf("%d",&x);
    for(int i=x;i>0;i--)
    {
        sum=sum+i;
        printf("%d\t",i);
    }
    printf("\nsum=%d",sum);
    return 0;
}