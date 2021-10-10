#include <stdio.h>
void main()
{
    int n,i,sum=0,rem,count=1,num;
    int a[10];
    printf("Enter the number ");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        rem=num%10;
        count++;
        num=num/10;
    }
    for(i=count-1;i>=0;i--)
    {
       rem=n%10;
       a[i]=rem;
       n=n/10;
    }
    printf("Digits extracted after omitting zero: ");
    for(i=0;i<count;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        printf("%d,",a[i]);
    }
}

