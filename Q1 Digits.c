#include<stdio.h>
void main()
{
    int num,rem,count=1,rev=0;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("the digits are:\n");
    while(num!=0)
    {
        rem = num%10;
        printf("%d\t",rem);
        num=num/10;
        rev=rev*10+rem;
        count++;
    }
    printf("\nnumber of digits are: %d",count);
    printf("\nReversed number is: %d",rev);
}