#include <stdio.h>
int main()
{
    int a;
    printf("Enter the age:\n");
    scanf("%d",&a);
    (a>=18)?printf("eligible to vote"):printf("not eligible to vote");
    return 0;
}
