#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,ref,a[100],count=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    {
        ref=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==ref)
            {
                count++;
                if(count==2)
                {
                    printf("The group is not unique");
                    exit(0);
                }
            }
        }
    }
    printf("The group is unique");
}