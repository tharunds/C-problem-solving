#include<stdio.h>
#include<math.h>
int power(float n,float r)
{
    printf("result=%f",pow(n,r));
}
int main()
{
    float n,r;
    printf("enter the base value=");
    scanf("%f",&n);
    printf("enter the required power value=");
    scanf("%f",&r);
    power(n,r);
    
    return 0;
}