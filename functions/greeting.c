#include<stdio.h>
char indian()
{
    printf("namaste\n");// return can't be used if the return variable is not declared
}
char french()
{
    printf("bonjure\n");
}

int main()
{
    char country;
    printf("enter u r country\n");
    scanf("%c",&country); // '&' will help me save in furter verification
    if(country=='i')      //we can also stroe char witnout usind '&'
    indian();
    else if(country=='f')//compiler has alredy stored these small character 
    french();            //' ' used to denote char constant
    else
    printf("hello\n");
    return 0;
}
