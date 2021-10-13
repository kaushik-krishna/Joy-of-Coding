#include <stdio.h>
void main()
{
    int n=10,i,j;
    int a[11]={2,6,10,14,18,3,7,11,15,19};
    n=n+1;
    for(j=n-2;j>3;j--)
    {
        a[j+1]=a[j];
    }
    a[4]=22;
    printf("The modified array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}