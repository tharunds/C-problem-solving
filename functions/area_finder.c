#include<stdio.h>
void square(float a)
{
    printf("area of square=%f",a*a);
}
void rectangle(float a,float b)
{
    printf("area of rectangle=%f",a*b);
}
void circle(float a)
{
    printf("area of circle=%f",3.14*a*a);
}
void trapizium(float a,float b,float h)
{
    printf("area of trapizium=%f",0.5*(a+b)*h);
}
int main()
{
    int choice;
    float a,b,h;
    printf("1-square\n2-rectangle\n3-circle\n4-trapizium\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: printf("enter side of square=");
            scanf("%f",&a);
            square(a);
            break;
    case 2: printf("enter length of rectangle=");
            scanf("%f",&a);
            printf("enter breadth=");
            scanf("%f",&b);
            rectangle(a,b);
            break;
    
    case 3: printf("enter radius of circle=");
            scanf("%f",&a);
    
            circle(a);
            break;
    case 4: printf("enter side 1 of traizium=");
            scanf("%f",&a);
            printf("enter side 2 of traizium=");
            scanf("%f",&b);
            printf("enter height of traizium=");
            scanf("%f",&h);
            trapizium(a,b,h);
             break;
    default:printf("enter correct choice");
    }
    return 0;
}