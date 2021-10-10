#include <stdio.h>
void main()
{
    int long books;
    int long cost;
    printf("Enter the number of books ");
    scanf("%ld",&books);
    cost=books*10;
    if(books<=10000)
    {
        printf("No discount!!!\nthe total cost is:Rs%ld",cost);
    }
    else if(books>10000 && books<=15000)
    {
        cost=cost-(cost*0.1);
        printf("Hey!! you got 10%% discount\n");
        printf("the total cost is:Rs %ld",cost);
    }
    else if(books>15000 && books<=20000)
    {
        cost=cost-(cost*(0.2));
        printf("Hey!! you got 20%% discount");
        printf("the total cost is:Rs%ld",cost);
    }
}
