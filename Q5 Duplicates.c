#include<stdio.h>
void main()
{
    int chit[10],num,i,count=0,attempt;
    printf("Enter the numbers on the chit (1-10): ");
    for(i=0;i<10;i++)
    scanf("%d",&chit[i]);
    printf("Pick a number (1-10): ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(num==chit[i])
        {
            attempt=i+1;
            count++;
        }
    }
    printf("Number of attempts= %d",attempt);
    printf("\nNumber of duplicates= %d",count);
}