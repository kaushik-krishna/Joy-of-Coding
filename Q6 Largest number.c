#include<stdio.h>
int main()
{
    int a,b,c,l;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    l=a>b?a:b;
    printf("The largest of %d and %d is %d\n",a,b,l);
    printf("Enter another number:\n");
    scanf("%d",&c);
    l=a>b?(a>c?a:c):(b>c?b:c);
    printf("The largest of %d, %d and %d is %d\n",a,b,c,l);
    return 0;
}
