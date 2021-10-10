#include <stdio.h>
void main()
{
    int num,sum =0,rem;
    printf("Enter a number: ");
    scanf("%d",&num);   
    while(num != 0) 
    {
        rem = num%10; 
        sum = sum+(rem+1);     
        num = num/10;  
    }
    printf("the sum of increased digits is:%d",sum);
}
