
#include <stdio.h>
#include <string.h>
void main()
{
    int i, l, count=0;
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    l=strlen(str);
    for(i=0; i<l/2; i++)
    {
    	if(str[i]==str[l-i-1])
    	count++;
 	}
 	if(count==i)
 	printf("%s is palindrome.\n", str);
    else
    printf("%s is not palindrome.\n", str);
}

