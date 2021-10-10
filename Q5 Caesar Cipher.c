#include <stdio.h>
void main()
{
    int num,sum =0,rem;
    printf("Enter the codeword: ");
    scanf("%d",&num);   
    while(num != 0) 
    {
        rem = num%10; 
        sum = sum*10+((rem+1)%10); 
        num = num/10;  
    }
    num=0;
    while(sum != 0) 
    {
        rem = sum%10; 
        num = num*10+rem; 
        sum = sum/10;  
    }
    printf("Decoded number :%d",num);
}
