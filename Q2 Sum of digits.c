#include <stdio.h>
void main()
{
    int num,dsum =0,ssum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&num);   
    while(num != 0) 
    {
        rem = num%10; 
        dsum = dsum+rem;     
        num = num/10;  
    }
    printf("the sum of digits is:%d",dsum);
    while(dsum!=0)
    {
        rem = dsum%10;
        ssum = ssum+rem;
        dsum = dsum/10;
    }
    printf("\nsingle digit sum is:%d",ssum);
}
