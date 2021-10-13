#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,a[100],count,fr[100];
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        fr[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
        fr[i]=count;
    }
    printf("Frequency of elements are as follows:\n");
    for(i=0;i<n;i++)
    {
        if(fr[i]!=0)
        printf("%d: %d\n",a[i],fr[i]);
    }
}