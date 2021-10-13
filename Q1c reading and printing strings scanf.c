#include <stdio.h>
#include<string.h>
void main()
{
   char str[20];
   scanf("%[^\n]%*c", str);
   printf("%s", str);
}