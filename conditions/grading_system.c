#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks\n");
    scanf("%d",&marks);
    if(marks<30)
    printf("c\n");
    else if(marks<70&&marks>=30)
    printf("b\n");
    else if(marks<90&&marks>=70)
    printf("A\n");
    else
    printf("a\n");
    return 0;
}