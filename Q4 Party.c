#include<stdio.h>
void main()
{
    int a[6]={560,660,590,760,480,960};
    float b[6]={66.0,79.25,76.55,98.45,96.40};
    char c[6]={'M','T','W','T','F','S'};
    int maxa=a[0];
    float maxb=b[0];
    char daya=c[0];
    char dayb=c[0];
    for(int i=0;i<6;i++)
    {
        if(maxa<a[i])
        {
             maxa=a[i];
             daya=c[i];
        }
        if(maxb<b[i])
        {
             maxb=b[i];
             dayb=c[i];
        }
    }
    printf("Mr Int parties on %c",daya);
    printf("\nMr Float parties on %c",dayb);
}