#include<stdio.h>
int main()
{
    int n;
    printf("enter the no\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        
        printf("%d\t",i);
        
    }
    if(n<=0)
    {
        printf("invalid input\n");
        
    }
    return 0;
}