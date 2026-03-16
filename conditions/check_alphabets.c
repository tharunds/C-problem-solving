#include<stdio.h>
int main()
{
    char x;
    printf("enter the chara\n");
    scanf("%c",&x);
    if((x>='A')&&(x<='Z'))
    printf(" it is a upper case\n");
    else if(('a'<=x)&&(x<='z'))
    printf(" it is a lower case\n");
    else 
    printf("default");
    return 0;
}