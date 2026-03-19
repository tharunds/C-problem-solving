#include<stdio.h>
int main()
{
    int n;
    printf("enter the no up to which u need output=");
    scanf("%d",&n);
    if(n<0)
    printf("no negitive no is allowed\n");
    for(int i=0;i<=n;i++)
    {
      if(i==6)
      {
      continue;
      }
      printf("%d\n",i);
    }
    return 0;
}
