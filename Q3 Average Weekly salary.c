#include<stdio.h>
void main()
{
    int a[6]={560,660,590,760,480,960};
    float b[6]={66.0,79.25,76.55,98.45,96.40};
    char c[6]={'M','T','W','T','F','S'};
    float suma=0,sumb=0,avga,avgb;
    for(int i=0;i<6;i++)
    {
        suma=suma+a[i];
        sumb=sumb+b[i];
    }
    avga=suma/6;
    avgb=sumb/6;
    printf("For Mr Int:\nWeekly Salary=%.2f\tAverage Salary=%.2f\n",suma,avga);
    printf("For Mr Float:\nWeekly Salary=%.2f\tAverage Salary=%.2f",sumb,avgb);
    
}