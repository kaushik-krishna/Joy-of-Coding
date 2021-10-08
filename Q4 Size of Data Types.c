#include<stdio.h>
int main()
{
    int i;
    short int s;
    long int l;
    char c;
    float f;
    double d;
    printf("Size of int:%zu bytes\n",sizeof(i));
    printf("Size of short int:%zu bytes\n",sizeof(s));
    printf("Size of long int:%zu bytes\n",sizeof(l));
    printf("Size of char:%zu bytes\n",sizeof(c));
    printf("Size of float:%zu bytes\n",sizeof(f));
    printf("Size of double:%zu bytes\n",sizeof(d));
    return 0;
}
