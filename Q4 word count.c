#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int count = 0, i;
    printf("Enter the string:\n");
    scanf("%[^\n]s", str);
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
        count++;    
    }
    printf("Number of words =%d\n", count+1);
}