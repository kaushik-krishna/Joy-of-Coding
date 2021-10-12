#include<stdio.h>
void main()
{
    int a[6]={560,660,590,760,480,960};
    float b[6]={66.0,79.25,76.55,98.45,96.40};
    char c[6]={'M','T','W','T','F','S'};
    printf("Details\nMrInt\tMrFloat\tMrChar\n");
    for(int i=0; i<6; i++)
    printf("%d\t%.2f\t%c\n",a[i],b[i],c[i]);
    printf("Details in reversed offer\n");
    for(int i=5; i>=0; i--)
    printf("%d\t%.2f\t%c\n",a[i],b[i],c[i]);
}