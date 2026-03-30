#include<stdio.h>
void calculate_price(float value)
{
    value=value+(0.18*value);
    printf("price including gst=%f\n",value);
}
int main()
{
    float value;
    printf("enterv the price\n");
    scanf("%f",&value);
    calculate_price(value);
    printf("original price=%f",value);
    return 0;
}