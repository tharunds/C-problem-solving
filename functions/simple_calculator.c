#include<stdio.h>
int result;
int add(int a,int b)                //parameter
{
  result=a+b;
  return result;
}
int sub(int a,int b)
{
    result=a-b;
    return result;
}
int multiply(int a,int b)
{
    result=a*b;
    return result;
}
int division(int a,int b)
{
    result=a/b;
    return result;
}

int main()
{ 
    int a,b,choice;
    printf("enter the two no\n");
    scanf("%d\n%d",&a,&b);
    printf("select the operation to be performed\n1-addition\n2-subtraction\n3-multiplication\n4-division\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        add(a,b);               //argument
        printf("result=%d",result);
    }
    else if(choice==2)
    {
        sub(a,b);
        printf("result=%d",result);
    }
    else if(choice==3)
    {
        multiply(a,b);
        printf("result=%d",result);
    }
    else if(choice==4)
    {
        division(a,b);
        printf("result=%d",result);
    }
    else
    {
        printf("enter correct choice\n");
    }
    return 0;
    
}