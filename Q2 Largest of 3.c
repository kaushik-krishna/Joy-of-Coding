#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,big,c;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
    {
        if(a>b)
        big=a;
        else
        big=b;
        printf("the largest is %d",big);
    }
    else
    {
        printf("invalid number in input");
        exit(0);
    }
    printf("\nEnter the third number ");
    scanf("%d",&c);
    if(c>0)
    {
        if(c>big)
        printf("the largest is %d",c);
        else
        printf("the largest is %d",big);
    }
    else
    {
        printf("invalid number in input");
    }
    return 0;
}
