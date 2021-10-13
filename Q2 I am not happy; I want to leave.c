#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n=10,i,j;
    int a[10]={2,6,10,14,18,3,7,11,15,19};
    n=n-1;
    for(i=0;i<=n;i++)
    {
        if(a[i]==3)
        {
            for(j=i;j<n;j++)
            a[j]=a[j+1];
            printf("The modified array is: ");
            for(i=0;i<n;i++)
            printf("%d  ",a[i]);
            exit(0);
        }
    }
}