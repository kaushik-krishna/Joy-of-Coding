#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main ()
{
    char str1[50] = "R N S Institute of Technology ", str2[15] = " Bengaluru";
    int l1=strlen(str1);
    int l2=strlen(str2);
    printf ("The length of the string 1 is : %u \n",l1);
    printf ("The length of the string 2 is : %u \n",l2);
    printf ("The string obtained after concatenation is : ");
    strcat (str1, str2);
    puts(str1);
    for(int i=0; str1[i]!='\0'; i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i] = str1[i] - 32;
        }
    }
    printf("Uppercase string : %s",str1);
    return 0;
}
