#include <stdio.h>
int main()
{
    int a,b,big;
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
    }
    return 0;
}
